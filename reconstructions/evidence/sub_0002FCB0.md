# sub_0002FCB0 — objdiff exact-match evidence

- **Candidate range:** `0x0002FCB0`–`0x0002FCBA` (end exclusive), 10 bytes.
- **Source SHA-256:** `C8AB44BA03CE90809C87FB352FEDC3E5927F26066F91EA5F595E900FF7505785`.
- **Host compile:** PASS — MSVC 19.51.36260 x86, `/W4 /O2 /c`. This is a host compile, not an Xbox link.
- **objdiff:** EXACT — 10/10 code bytes, 100%, objdiff 3.8.2.
- **Static/semantic review:** PENDING maintainer review.
- **Xbox link/runtime:** PENDING; not established by this object comparison.
- **Boundary caveat:** this ID is an XboxRecomp split candidate. Candidate boundaries are heuristic and are not asserted as confirmed original linked-function boundaries.

## Dependency pointers

- Direct callers with a C reconstruction in this submission batch: `sub_0002B2B0`
- Direct callees with a C reconstruction in this submission batch: Not established in the public evidence; verify during review.
- Direct callees without a C reconstruction in this submission batch: Not established in the public evidence; verify during review.

## Reproducible evidence

Compile the submitted source as 32-bit x86 with MSVC 19.51.36260 and `/W4 /O2 /c`, then compare the candidate object to `candidate/sub_0002FCB0` with objdiff 3.8.2. The approved public report is [`progress-source.json`](../../tools/decompdev/progress-source.json); locate unit `candidate/sub_0002FCB0`. The source hash above identifies this submitted reconstruction; the public objdiff report lists its matching candidate unit. No target byte dump or game binary is included here.

## Lot 88 fresh revalidation (2026-10-28)

- GitHub Issue: [#8624](https://github.com/soldieg/ReBLACK-XBOX/issues/8624); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_56343bb02262e92aadef55cf810d70151e879a3b8c077e1e7fa132feae3671c5`; complete REA byte-read Evidence: `ev_eb334242ee184c30c2abe340d979a2dfc921b403ac277e94f2d3f77f674ceb19`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 10 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `2ffed96486fea20b9818bb37a3990e9e013befbbac02e6fb0871ed2c1b07ad32`; candidate COFF SHA-256: `12fea81b4bdd9a4f9c1afcc21b7fd29dd7f868ad92f1d8bb8a0e07c449b18aeb`; compiled COFF SHA-256: `89206e950816f0e60c913859f2dc167fdf810c2014bba56222c7879db5b23560`; ObjDiff report SHA-256: `e213f85c2130f5a0d69b751cdaf9c2cbe9d54a289cc0a71a3f82653002e38396`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
