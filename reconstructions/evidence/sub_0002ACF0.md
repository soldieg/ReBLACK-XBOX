# sub_0002ACF0 — objdiff exact-match evidence

- **Candidate range:** `0x0002ACF0`–`0x0002ACF6` (end exclusive), 6 bytes.
- **Source SHA-256:** `385727D350F188F2675AA1EEF10418045192FE6544EEB36AE5C0DF13156246FF`.
- **Host compile:** PASS — MSVC 19.51.36260 x86, `/W4 /O2 /c`. This is a host compile, not an Xbox link.
- **objdiff:** EXACT — 6/6 code bytes, 100%, objdiff 3.8.2.
- **Static/semantic review:** PENDING maintainer review.
- **Xbox link/runtime:** PENDING; not established by this object comparison.
- **Boundary caveat:** this ID is an XboxRecomp split candidate. Candidate boundaries are heuristic and are not asserted as confirmed original linked-function boundaries.

## Dependency pointers

- Direct callers with a C reconstruction in this submission batch: `sub_00033350`
- Direct callees with a C reconstruction in this submission batch: Not established in the public evidence; verify during review.
- Direct callees without a C reconstruction in this submission batch: Not established in the public evidence; verify during review.

## Reproducible evidence

Compile the submitted source as 32-bit x86 with MSVC 19.51.36260 and `/W4 /O2 /c`, then compare the candidate object to `candidate/sub_0002ACF0` with objdiff 3.8.2. The approved public report is [`progress-source.json`](../../tools/decompdev/progress-source.json); locate unit `candidate/sub_0002ACF0`. The source hash above identifies this submitted reconstruction; the public objdiff report lists its matching candidate unit. No target byte dump or game binary is included here.

## Lot 88 fresh revalidation (2026-10-28)

- GitHub Issue: [#8618](https://github.com/soldieg/ReBLACK-XBOX/issues/8618); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_60bc3ac0f3e705c9d8920d6c71ac3c2f793d3103fa6c2b8213218e22ec8cb9d6`; complete REA byte-read Evidence: `ev_64e5d3b6bb93e285bd405e983391ae3d99a1b4e323995074a8138e49ed1f8985`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 6 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `914870e1502023bc8c44dabd3b92301b5c3efe21604a6d7ee0bded69e20c74a3`; candidate COFF SHA-256: `3ce22f52a02a0b97acc07c021b7952454f5f219d192ecf65809371bd752d1819`; compiled COFF SHA-256: `fbce4951066d33ca48e6813427f5d60b0412616a029186166b945dda2665f276`; ObjDiff report SHA-256: `b294efaeec93e91620927ecc0aec4cbd0a23a04d4f8e8510765bbae75e8100ea`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
