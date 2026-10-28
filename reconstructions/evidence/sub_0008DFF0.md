# sub_0008DFF0 — objdiff exact-match evidence

- **Candidate range:** `0x0008DFF0`–`0x0008DFFB` (end exclusive), 11 bytes.
- **Source SHA-256:** `580FC5D40AB5438CAB18BBF97EB32E2B9CBA8387FB18339291BF9A7C09D07037`.
- **Host compile:** PASS — MSVC 19.51.36260 x86, `/W4 /O2 /c`. This is a host compile, not an Xbox link.
- **objdiff:** EXACT — 11/11 code bytes, 100%, objdiff 3.8.2.
- **Static/semantic review:** PENDING maintainer review.
- **Xbox link/runtime:** PENDING; not established by this object comparison.
- **Boundary caveat:** this ID is an XboxRecomp split candidate. Candidate boundaries are heuristic and are not asserted as confirmed original linked-function boundaries.

## Dependency pointers

- Direct callers with a C reconstruction in this submission batch: Not established in the public evidence; verify during review.
- Direct callees with a C reconstruction in this submission batch: Not established in the public evidence; verify during review.
- Direct callees without a C reconstruction in this submission batch: Not established in the public evidence; verify during review.

## Reproducible evidence

Compile the submitted source as 32-bit x86 with MSVC 19.51.36260 and `/W4 /O2 /c`, then compare the candidate object to `candidate/sub_0008DFF0` with objdiff 3.8.2. The approved public report is [`progress-source.json`](../../tools/decompdev/progress-source.json); locate unit `candidate/sub_0008DFF0`. The source hash above identifies this submitted reconstruction; the public objdiff report lists its matching candidate unit. No target byte dump or game binary is included here.

## Lot 90 fresh revalidation (2026-10-28)

- GitHub Issue: [#8828](https://github.com/soldieg/ReBLACK-XBOX/issues/8828); open and without a prior lot tag when audited.
- Fresh Ghidra 12.1.3 boundary/relationship Evidence: `ev_d692b4587955d78346016679212eea76d64a6299a84116fc391a647d68e28070`; complete REA byte-read Evidence: `ev_4a3f4746e57706eafc55f00fdee13690169462d26816b12f7ef16323e0e82889`.
- MSVC x86 object bytes match REA, original XBE raw, mapped derived PE, XboxRecomp split, and named candidate COFF for 11 bytes.
- Candidate and fresh object have zero relocations; ObjDiff 3.8.2 reports the symbol and `.text$mn` at 100.00%.
- Source SHA-256: `580fc5d40ab5438cab18bbf97eb32e2b9cba8387fb18339291bf9a7c09d07037`; candidate COFF SHA-256: `36a735f3ac1e8680a8c11479716d86e285bb2f5641291441f4cf0cc2dc5f444c`; compiled COFF SHA-256: `4974bce45a54241b4a9f6ec1fbed232905c50f11fa743324b68e587ee136fa95`; ObjDiff report SHA-256: `6768d48500b3e118ace22cf0c4d23f1e0767eac289ff1f41de6f1f17166256bd`.
- Static byte-emitter validation only. Semantic C, formal ABI, Xbox full link, post-link XBE diff, runtime, and gameplay remain unverified.
