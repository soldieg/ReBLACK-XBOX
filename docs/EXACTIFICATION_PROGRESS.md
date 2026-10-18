# 346-function exactification queue

**Snapshot date:** 2026-10-17

The progress page reads its 346-function queue count from `docs/data/exactification-progress.json`. Updating that sanitized count file and pushing it to `main` triggers the GitHub Pages workflow; the page is generated from that data instead of maintaining a second hard-coded count.

This is a status snapshot for the private exactification batch of 346 previously recorded function results. It is separate from the public objdiff dashboard, which reports a 13,676-candidate split inventory.

| Queue status | Count |
| --- | ---: |
| Freshly revalidated exact passes | 307 |
| Recorded results awaiting fresh revalidation | 39 |
| Batch rows classified as nonexact | 0 |
| **Total batch** | **346** |

That is 307/346 (**88.73%**) revalidated, with 39/346 (**11.27%**) still pending fresh validation.

“Exact pass” here means the function passed the project's current source-specific byte and objdiff checks and its status was reconciled into the queue. An independent audit on 2026-10-17 checked all 307 current records: each points to a unique function address and validation record, each recorded compiled COFF `.text` section matches the original XBE span byte for byte, all 307 spans match, and none overlap. The recorded Xbox image and object hashes also matched.

This confirms exact machine-code reproduction for those recorded spans. It does not prove that the readable semantic C reconstruction is equivalent: 290 of the 307 canonical C files currently emit the exact bytes directly, while 17 use a separate exact source. Xbox full linking, runtime behavior, and visible gameplay remain unverified. The 39 pending rows are historical exact records awaiting fresh revalidation; they are not counted as current passes.

These queue figures do not change the public candidate dashboard, which reports 63 exact candidate matches / 811 bytes among 13,676 split candidates. It uses a separate sanitized objdiff snapshot and denominator; the 307 queue revalidations must not be added to that figure. No source code, binaries, target bytes, or private evidence are included in this status snapshot.
