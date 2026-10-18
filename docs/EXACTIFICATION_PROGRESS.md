# 346-function exactification queue

**Snapshot date:** 2026-10-17

The progress page reads sanitized per-function records from `docs/data/exactification-functions.json`. The dashboard generator checks each function ID, address, size, and status against the existing candidate map, then calculates the queue totals from those records. Updating this file and pushing it to `main` triggers the GitHub Pages workflow.

The public file contains function IDs, addresses, sizes, and queue status only. It does not contain reconstructed source, game bytes, binaries, local evidence paths, or private hashes. This 346-function queue remains a distinct validation source from the 13,676-candidate objdiff snapshot; the page keeps those measurements labeled separately.

| Queue status | Count |
| --- | ---: |
| Freshly revalidated exact passes | 307 |
| Recorded results awaiting fresh revalidation | 39 |
| Batch rows classified as nonexact | 0 |
| **Total batch** | **346** |

That is 307/346 (**88.73%**) revalidated, with 39/346 (**11.27%**) still pending fresh validation.

“Exact pass” here means the function passed the project's current source-specific byte and objdiff checks and its status was reconciled into the queue. An independent audit on 2026-10-17 checked all 307 current records: each points to a unique function address and validation record, each recorded compiled COFF `.text` section matches the original XBE span byte for byte, all 307 spans match, and none overlap. The recorded Xbox image and object hashes also matched.

This confirms exact machine-code reproduction for those recorded spans. It does not prove that the readable semantic C reconstruction is equivalent: 290 of the 307 canonical C files currently emit the exact bytes directly, while 17 use a separate exact source. Xbox full linking, runtime behavior, and visible gameplay remain unverified. The 39 pending rows are historical exact records awaiting fresh revalidation; they are not counted as current passes.

The page shows the queue status in its existing scope banner and marks each matching candidate in the map details. The separate objdiff metrics remain 63 exact candidate matches / 811 bytes among 13,676 split candidates; the 307 queue passes are not added to that count or byte percentage. The public function list contains only IDs, addresses, sizes, and queue status; it does not include source code, binaries, target bytes, or private evidence.
