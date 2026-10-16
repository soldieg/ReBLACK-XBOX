import json
import tempfile
import unittest
from pathlib import Path

from build_dashboard import address_region, read_validation_index


class DashboardValidationTests(unittest.TestCase):
    def test_address_region_groups_by_64_kib_without_claiming_function_nesting(self):
        self.assertEqual(address_region("sub_00011000"), "0x00010000")
        self.assertEqual(address_region("sub_0001FFFF"), "0x00010000")
        self.assertEqual(address_region("sub_00020000"), "0x00020000")
        self.assertIsNone(address_region("candidate_without_address"))

    def test_only_maintainer_accepted_build_diff_records_count_as_validated(self):
        candidates = [
            {"name": "sub_00011000", "bytes": 62},
            {"name": "sub_00011040", "bytes": 49},
        ]
        payload = {
            "schemaVersion": 1,
            "functions": [
                {"id": "sub_00011000", "buildDiff": "pass", "maintainerReview": "accepted", "evidence": "https://github.com/soldieg/ReBLACK-XBOX/issues/10"},
                {"id": "sub_00011040", "buildDiff": "pending", "maintainerReview": "pending", "evidence": ""},
            ],
        }
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "validation-index.json"
            path.write_text(json.dumps(payload), encoding="utf-8")
            result = read_validation_index(path, candidates)
        self.assertEqual(result["validatedIds"], ["sub_00011000"])
        self.assertEqual(result["validatedCount"], 1)

    def test_validation_index_rejects_unknown_candidate(self):
        payload = {"schemaVersion": 1, "functions": [{"id": "sub_FFFFFFFF", "buildDiff": "pass", "maintainerReview": "accepted", "evidence": "https://example.com/evidence"}]}
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "validation-index.json"
            path.write_text(json.dumps(payload), encoding="utf-8")
            with self.assertRaises(ValueError):
                read_validation_index(path, [{"name": "sub_00011000", "bytes": 62}])

    def test_accepted_record_requires_public_evidence_link(self):
        payload = {"schemaVersion": 1, "functions": [{"id": "sub_00011000", "buildDiff": "pass", "maintainerReview": "accepted", "evidence": ""}]}
        with tempfile.TemporaryDirectory() as directory:
            path = Path(directory) / "validation-index.json"
            path.write_text(json.dumps(payload), encoding="utf-8")
            with self.assertRaises(ValueError):
                read_validation_index(path, [{"name": "sub_00011000", "bytes": 62}])


if __name__ == "__main__":
    unittest.main()
