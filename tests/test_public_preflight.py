import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools" / "decompdev"))
from validate_public_contributions import (
    inspect_public_file,
    validate_function_pairs,
    validate_validation_index_permission,
)


class PublicPreflightTests(unittest.TestCase):
    def test_allows_dashboard_dataset_above_generic_text_limit(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            dataset = root / "docs" / "data" / "exactification-functions.json"
            dataset.parent.mkdir(parents=True)
            dataset.write_bytes(b" " * (1024 * 1024 + 1))
            self.assertEqual(inspect_public_file(dataset, root), [])
            other = root / "docs" / "data" / "other.json"
            other.write_bytes(dataset.read_bytes())
            self.assertTrue(inspect_public_file(other, root))

    def test_rejects_game_binaries_and_absolute_local_paths(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            binary = root / "reconstructions" / "game.xbe"
            binary.parent.mkdir(parents=True)
            binary.write_bytes(b"XBEH\x00")
            self.assertTrue(inspect_public_file(binary, root))
            evidence = root / "reconstructions" / "evidence.md"
            evidence.write_text("Local copy: F:\\REBLACK\\XBOX\\default.xbe\n", encoding="utf-8")
            self.assertTrue(inspect_public_file(evidence, root))

    def test_requires_maintainer_for_validation_index_changes(self):
        changed = ["reconstructions/validation-index.json"]
        self.assertTrue(validate_validation_index_permission(changed, False))
        self.assertFalse(validate_validation_index_permission(changed, True))
        self.assertFalse(validate_validation_index_permission(["reconstructions/functions/sub_00011000.c"], False))

    def test_requires_a_matching_candidate_record_for_each_function_source(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            sources = root / "reconstructions" / "functions"
            evidence = root / "reconstructions" / "evidence"
            sources.mkdir(parents=True)
            evidence.mkdir(parents=True)
            (sources / "sub_00011000.c").write_text("uint32_t sub_00011000(void) { return 1; }", encoding="utf-8")
            (evidence / "sub_00011000.md").write_text("Evidence summary", encoding="utf-8")
            errors = validate_function_pairs(["reconstructions/functions/sub_00011000.c"], root, {"sub_00011000"})
            self.assertFalse(errors)
            errors = validate_function_pairs(["reconstructions/functions/sub_00011000.c"], root, set())
            self.assertTrue(errors)

    def test_rejects_missing_evidence_file(self):
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            sources = root / "reconstructions" / "functions"
            sources.mkdir(parents=True)
            (sources / "sub_00011000.c").write_text("uint32_t sub_00011000(void) { return 1; }", encoding="utf-8")
            errors = validate_function_pairs(["reconstructions/functions/sub_00011000.c"], root, {"sub_00011000"})
            self.assertTrue(errors)


if __name__ == "__main__":
    unittest.main()
