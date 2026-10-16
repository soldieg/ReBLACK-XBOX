# sub_000AD0C0 — objdiff exact-match evidence

- **Candidate range:** `0x000AD0C0`–`0x000AD0D0` (end exclusive), 16 bytes.
- **Source SHA-256:** `E09B1381329D1C62520CC006802528800B3801BB5311764D7AA6CF24B8ACF204`.
- **Host compile:** PASS — MSVC 19.51.36260 x86, `/W4 /O2 /c`. This is a host compile, not an Xbox link.
- **objdiff:** EXACT — 16/16 code bytes, 100%, objdiff 3.8.2.
- **Static/semantic review:** PENDING maintainer review.
- **Xbox link/runtime:** PENDING; not established by this object comparison.
- **Boundary caveat:** this ID is an XboxRecomp split candidate. Candidate boundaries are heuristic and are not asserted as confirmed original linked-function boundaries.

## Dependency pointers

- Direct callers with a C reconstruction in this submission batch: Not established in the public evidence; verify during review.
- Direct callees with a C reconstruction in this submission batch: Not established in the public evidence; verify during review.
- Direct callees without a C reconstruction in this submission batch: Not established in the public evidence; verify during review.

## Reproducible evidence

Compile the submitted source as 32-bit x86 with MSVC 19.51.36260 and `/W4 /O2 /c`, then compare the candidate object to `candidate/sub_000AD0C0` with objdiff 3.8.2. The approved public report is [`progress-source.json`](../../tools/decompdev/progress-source.json); locate unit `candidate/sub_000AD0C0`. The source hash above identifies this submitted reconstruction; the public objdiff report lists its matching candidate unit. No target byte dump or game binary is included here.
