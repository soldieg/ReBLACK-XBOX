# 346-function exactification queue

**Snapshot date:** 2026-10-17

The dashboard generator checks each function ID, address, size, and status in `docs/data/exactification-functions.json` against the existing candidate map. Current exact rows are merged into the existing exact-byte candidate classification by function ID; a candidate already exact in objdiff is counted once. Pending rows do not add an exact match. Updating this file and pushing it to `main` triggers the GitHub Pages workflow.

The public file contains function IDs, addresses, sizes, and queue status only. It does not contain reconstructed source, game bytes, binaries, local evidence paths, or private hashes. The 346-function list supplies per-candidate validation records to the 13,676-candidate snapshot; it is not displayed as a separate progress measure.

| Queue status | Count |
| --- | ---: |
| Freshly revalidated exact passes | 307 |
| Recorded results awaiting fresh revalidation | 39 |
| Batch rows classified as nonexact | 0 |
| **Total batch** | **346** |

That is 307/346 (**88.73%**) revalidated, with 39/346 (**11.27%**) still pending fresh validation.

“Exact pass” here means the function passed the project's current source-specific byte and objdiff checks and its status was reconciled into the queue. An independent audit on 2026-10-17 checked all 307 current records: each points to a unique function address and validation record, each recorded compiled COFF `.text` section matches the original XBE span byte for byte, all 307 spans match, and none overlap. The recorded Xbox image and object hashes also matched.

This confirms exact machine-code reproduction for those recorded spans. It does not prove that the readable semantic C reconstruction is equivalent: 290 of the 307 canonical C files currently emit the exact bytes directly, while 17 use a separate exact source. Xbox full linking, runtime behavior, and visible gameplay remain unverified. The 39 pending rows are historical exact records awaiting fresh revalidation; they are not counted as current passes.

The current dashboard combines the 63 objdiff-exact candidates (811 bytes) with the 307 current byte-exact records (42,769 bytes). Twenty-five candidates (456 bytes) occur in both sources, so the page counts **345 unique exact candidates / 43,124 bytes** among 13,676 candidates, or **1.8773%** of candidate code bytes. This is a deduplicated union, not a separate queue card. The 39 pending rows do not contribute new exact status. The public function list contains only IDs, addresses, sizes, and status; it does not include source code, binaries, target bytes, or private evidence.
