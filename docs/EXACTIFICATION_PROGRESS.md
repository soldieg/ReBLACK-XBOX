# 346-function exactification queue

**Queue snapshot date:** 2026-10-18
**Dashboard exactification refresh:** 2026-10-24

The progress page does not show a separate queue card. The 346-entry queue remains documented here and is kept separate from 2,075 additional exact-byte function records in `docs/data/exactification-functions.json` (the original 15, 1,760 already-merged functions, lot 18 in PR #1958, lot 19 in open PR #2059, and lot 20 in open PR #2160). The reviewed objdiff report itself remains unchanged. On the candidate map, the dashboard combines both sets of exact records with objdiff exact candidates by function identity and counts overlaps once.

The public function list contains only function IDs, addresses, sizes, and exact status. It contains no reconstructed source, game bytes, binaries, local evidence paths, or private hashes. The 346-entry queue remains a separate measure from the 13,676-candidate objdiff snapshot; the 2,075 additional records are not included in its denominator.

| Queue status | Count |
| --- | ---: |
| Freshly revalidated exact passes | 346 |
| Recorded results awaiting fresh revalidation | 0 |
| Batch rows classified as nonexact | 0 |
| **Total batch** | **346** |

That is **346/346 (100%)** of this exactification queue revalidated; **0/346** await fresh validation. The 100% applies only to the defined 346-function queue, not to the whole game or the 13,676-candidate split inventory.

All 346 queue entries now have a current static/build-diff exact pass. Evidence across the queue compares reconstructed object code with the recorded XBE spans and XboxRecomp reference objects, with the matching validation boundaries recorded locally. The final five historical entries were recompiled and compared in the 2026-10-18 refresh; `sub_00043050` uses an exact x86 byte emitter because unresolved COFF call relocations otherwise left zero displacements in the isolated object. Its semantic reconstruction was preserved locally.

These results establish exact machine-code reproduction for the recorded spans. The 2,060 added batch records each have a compiled source, a 100.00% ObjDiff result against the named candidate, and a complete byte-for-byte match in their public evidence dossier. They do not prove that readable semantic C is equivalent, nor do they establish Xbox full linking, runtime behavior, or visible gameplay. Those checks and the Package Hub artifact-profile audit remain pending. The raw objdiff snapshot still reports **63 exact candidate matches / 811 bytes** among 13,676 split candidates. The candidate map combines those with the 346 queue entries and 2,075 additional exact-byte records by identity: **2,426 unique exact candidate entries / 411,679 bytes (17.9212%)**. The original 15 additional entries are `sub_00026FD2` (23 bytes), `sub_000A37E0` (9), `sub_000A39F1` (9), `sub_000A7299` (18), `sub_000A734B` (46), `sub_00014C50` (38), `sub_00014240` (47), `sub_00014CF0` (130), `sub_00015550` (73), `sub_00015620` (93), `sub_000155A0` (122), `sub_00011A70` (40), `sub_00092C40` (31), `sub_00092CA0` (31), and `sub_00092C60` (57). The ten new records come from merged PRs [#41](https://github.com/soldieg/ReBLACK-XBOX/pull/41) and [#48](https://github.com/soldieg/ReBLACK-XBOX/pull/48). This combined map total is separate from the queue's 346/346 count and is not a whole-game completion percentage. The public status records only byte exactness; it does not claim semantic C equivalence, Xbox full linking, or runtime validation.

To refresh the page, update the sanitized function statuses, run `python tools/decompdev/build_dashboard.py`, review the generated preview, then commit the updated data and page changes. GitHub Actions validates the report and publishes the dashboard from the commit. Detailed C sources, binaries, target bytes, and local evidence remain outside this repository.
