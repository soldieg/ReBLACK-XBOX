# 346-function exactification queue

**Snapshot date:** 2026-10-17

This is a status snapshot for the private exactification batch of 346 previously recorded function results. It is separate from the public objdiff dashboard, which reports a 13,676-candidate split inventory.

| Queue status | Count |
| --- | ---: |
| Freshly revalidated exact passes | 307 |
| Recorded results awaiting fresh revalidation | 39 |
| Batch rows classified as nonexact | 0 |
| **Total batch** | **346** |

That is 307/346 (**88.73%**) revalidated, with 39/346 (**11.27%**) still pending. Two 4-byte DSound entries are currently undergoing validation and remain in the pending count until their evidence and trackers are reconciled.

“Exact pass” here means the function passed the project's current source-specific byte and objdiff checks and its status was reconciled into the queue. It does not establish whole-game completion, Xbox linking, runtime behavior, or visible gameplay. The 39 pending rows are historical exact records awaiting fresh revalidation; they are not counted as current passes.

These queue figures do not change the decomp.dev/objdiff dashboard totals. That dashboard uses a different denominator and is refreshed only from its sanitized report and matching approval record. No source code, binaries, target bytes, or private evidence are included in this status snapshot.
