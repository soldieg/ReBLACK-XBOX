# sub_0013CFE0

- Ghidra 12.1.3 body: `0x13cfe0–0x0013D00C`, contiguous, 45 bytes.
- Observed callers: `0x0014421c` from `sub_001441E0`. Direct callees: none reported; no unresolved direct calls reported.
- Ghidra memory = XBE raw = derived PE = XboxRecomp split = candidate object = compiled MSVC x86 `.text$mn` = source emitter, 45/45; span SHA-256 `145e2039d29ed55bfc4a81f56df24d04fc51802f9120eed4bc6cde96a0681f89`.
- MSVC 19.51.36260 x86 `/W4` completed without diagnostics. ObjDiff 3.8.2: 100.00% against the identified candidate object.
- Address-pinned byte emitter only. Semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
- Validation artifacts remain local under `decompilacao/compilacao/github-site-lot57-100fn-20261026/`.
- Function task: [#1004](https://github.com/soldieg/ReBLACK-XBOX/issues/1004); lot 57.
