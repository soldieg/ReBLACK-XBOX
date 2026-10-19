# sub_0009CDED — exact-byte reconstruction evidence

- **Target range:** `0x0009CDED–0x0009CDF3` (inclusive), 7 bytes.
- **Submitted source SHA-256:** `691164DC3546CEE04CAB7630B39503ADB0C2538D14A445BB0285971A9C54BF14`.
- **Reconstruction form:** C field-load expression compiled to x86 instructions; no explicit byte emission in this source. The source is intended to reproduce this function body exactly; it is not a claim of semantic C equivalence.
- **Static byte review:** PASS — recorded REA/body evidence; compiled bytes equal the XBE, mapped XboxRecomp reference object, and split span; ObjDiff 3.8.2 reports 100%.
- **Isolated compile:** PASS — MSVC 19.51.36260 x86; options: `/TC /c /O2 /GS- /Zl /Gd /Gy`.
- **Xbox full link/runtime:** not run.
- **Review tracking:** Related GitHub Issue: [#14](https://github.com/soldieg/ReBLACK-XBOX/issues/14). This batch is published on branch `codex/exact-functions-batch-20261018`; maintainers should review function boundaries and evidence before updating the validation index.

## Reproducible evidence

The local validation record identifies the source, range, compiler options, and byte-comparison result. The public reconstruction contains only the C source and this sanitized summary; it omits game binaries, target byte dumps, and local machine paths. The exact-byte result does not establish Xbox integration or runtime behavior.

## Static review basis

REA/Ghidra confirms MOV EAX,[ECX+4]; AND EAX,1; RET. Semantic C generates the exact seven bytes; direct body comparison confirms candidate=XBE raw=PE mapped span=split. ObjDiff reaches 100% after applying the existing COFF symbol alias in a comparison-only object copy.
