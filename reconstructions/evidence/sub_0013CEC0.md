# sub_0013CEC0

- Ghidra 12.1.3 body: `0x13cec0–0x0013CEEA`, contiguous, 43 bytes.
- Observed callers: `0x00150e03` from `sub_00150D20`. Direct callees: none reported; no unresolved direct calls reported.
- Ghidra memory = XBE raw = derived PE = XboxRecomp split = candidate object = compiled MSVC x86 `.text$mn` = source emitter, 43/43; span SHA-256 `1246db53ba54a67317d392d0a4c3200d8a09904d98662a0d71f3f080d5c697e2`.
- MSVC 19.51.36260 x86 `/W4` completed without diagnostics. ObjDiff 3.8.2: 100.00% against the identified candidate object.
- Address-pinned byte emitter only. Semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
- Validation artifacts remain local under `decompilacao/compilacao/github-site-lot57-100fn-20261026/`.
- Function task: [#1001](https://github.com/soldieg/ReBLACK-XBOX/issues/1001); lot 57.
