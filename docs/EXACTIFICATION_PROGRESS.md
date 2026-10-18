# 346-function exactification queue

**Snapshot date:** 2026-10-18

The progress page shows this queue in a separate card. Its counts are generated from the sanitized per-function records in `docs/data/exactification-functions.json`. The reviewed objdiff report itself remains unchanged. On the candidate map, the dashboard combines current exactification records with objdiff exact candidates by function identity and counts overlaps once.

The public function list contains only function IDs, addresses, sizes, and queue status. It contains no reconstructed source, game bytes, binaries, local evidence paths, or private hashes. This queue is a separate measure from the 13,676-candidate objdiff snapshot.

| Queue status | Count |
| --- | ---: |
| Freshly revalidated exact passes | 346 |
| Recorded results awaiting fresh revalidation | 0 |
| Batch rows classified as nonexact | 0 |
| **Total batch** | **346** |

That is **346/346 (100%)** of this exactification queue revalidated; **0/346** await fresh validation. The 100% applies only to the defined 346-function queue, not to the whole game or the 13,676-candidate split inventory.

All 346 queue entries now have a current static/build-diff exact pass. Evidence across the queue compares reconstructed object code with the recorded XBE spans and XboxRecomp reference objects, with the matching validation boundaries recorded locally. The final five historical entries were recompiled and compared in the 2026-10-18 refresh; `sub_00043050` uses an exact x86 byte emitter because unresolved COFF call relocations otherwise left zero displacements in the isolated object. Its semantic reconstruction was preserved locally.

These results establish exact machine-code reproduction for the recorded spans. They do not prove that readable semantic C is equivalent, nor do they establish Xbox full linking, runtime behavior, or visible gameplay. Those checks and the Package Hub artifact-profile audit remain pending. The raw objdiff snapshot still reports **63 exact candidate matches / 811 bytes** among 13,676 split candidates. The candidate map combines those with the current exactification entries by identity: **351 unique exact candidate entries / 43,169 bytes**. This combined map total is separate from the queue's 346/346 count and is not a whole-game completion percentage.

To refresh the page, update the sanitized function statuses, run `python tools/decompdev/build_dashboard.py`, review the generated preview, then commit the updated data and page changes. GitHub Actions validates the report and publishes the dashboard from the commit. Detailed C sources, binaries, target bytes, and local evidence remain outside this repository.
