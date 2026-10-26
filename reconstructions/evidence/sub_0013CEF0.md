# sub_0013CEF0

- Ghidra 12.1.3 body: `0x13cef0–0x0013CF18`, contiguous, 41 bytes.
- Observed callers: `0x0014d991` from `sub_0014D8F0`. Direct callees: none reported; no unresolved direct calls reported.
- Ghidra memory = XBE raw = derived PE = XboxRecomp split = candidate object = compiled MSVC x86 `.text$mn` = source emitter, 41/41; span SHA-256 `534a3ca5c20350e37772c6725fac109aa49d11581c0cde5f2739147fc3408246`.
- MSVC 19.51.36260 x86 `/W4` completed without diagnostics. ObjDiff 3.8.2: 100.00% against the identified candidate object.
- Address-pinned byte emitter only. Semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
- Validation artifacts remain local under `decompilacao/compilacao/github-site-lot57-100fn-20261026/`.
- Function task: [#998](https://github.com/soldieg/ReBLACK-XBOX/issues/998); lot 57.
