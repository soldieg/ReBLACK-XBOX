# 346-function exactification queue

**Snapshot date:** 2026-10-18

The progress page shows this queue in a separate card. Its counts are generated from the sanitized per-function records in `docs/data/exactification-functions.json`; the card does not change the objdiff exact-match count or percentage.

The public function list contains only function IDs, addresses, sizes, and queue status. It contains no reconstructed source, game bytes, binaries, local evidence paths, or private hashes. This queue is a separate measure from the 13,676-candidate objdiff snapshot.

| Queue status | Count |
| --- | ---: |
| Freshly revalidated exact passes | 319 |
| Recorded results awaiting fresh revalidation | 27 |
| Batch rows classified as nonexact | 0 |
| **Total batch** | **346** |

That is 319/346 (**92.20%**) revalidated, with 27/346 (**7.80%**) awaiting fresh validation. The 27 pending rows are historical exact records that have not yet been revalidated in this pass; they are not classified as nonexact.

The 319 current passes comprise 307 records independently audited on 2026-10-17 and 12 additional exact passes recorded on 2026-10-18. The audit of the original 307 checked unique function identities and validation records, byte-for-byte equality between each compiled COFF `.text` span and its XBE span, non-overlapping spans, and matching recorded XBE/object hashes. The additional 12 were compiled with MSVC x86, scored 100% in the recorded ObjDiff comparisons, and matched their XBE raw spans, derived-PE mappings, XboxRecomp reference objects, and split bytes over the verified function spans.

These results confirm exact machine-code reproduction for the recorded spans. They do not prove that readable semantic C is equivalent, nor do they establish Xbox full linking, runtime behavior, or visible gameplay. The dashboard's separate objdiff snapshot currently reports **63 exact candidate matches / 811 bytes** among 13,676 split candidates; those objdiff figures are not combined with the 319-function queue count.

To refresh the page, update the sanitized function statuses, run `python tools/decompdev/build_dashboard.py`, review the generated preview, then commit the updated data and page changes. GitHub Actions validates the report and publishes the dashboard from the commit. Detailed C sources, binaries, target bytes, and local evidence remain outside this repository.
