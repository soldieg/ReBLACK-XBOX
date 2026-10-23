# sub_000E2AA0

- Candidate: dashboard row `sub_000E2AA0`, candidate object `sub_000E2AA0.obj`, 113 bytes.
- Observed body: one contiguous Ghidra range `0xE2AA0–0xE2B10` (113 bytes); caller `0xE5E60`.
- REA/Ghidra 12.1.3 dossier: `ev_529ba85426528fe9b88d0eb6e96d01f81f58323da677b8953592896972cbe129`; complete byte read: `ev_1c86b88d2401ba22eee2111036c2606a293b5090542603abb20a6fe1fe9550bc`.
- The source preserves the observed register inputs, field writes, branch conditions, scalar SIMD load/store and `RET 8` using x86 inline assembly. Source-level argument types and caller ABI remain unknown.
- MSVC 19.51.36260.0 x86, `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy`: compiled without diagnostics.
- ObjDiff 3.8.2 against candidate `sub_000E2AA0.obj`: function symbol `_sub_000E2AA0` = **100%**, `.text$mn` 113/113 bytes.
- REA bytes = original XBE raw = XboxRecomp split, 113/113 bytes; SHA-256 `047e9b3b62d288738c43244daa6b0f167661f5adb2cdb8d44d3028e692c18272`.
- Target identity: derived PE SHA-256 `AABDEBF414D216E67161DF9DDFD1FAC5FD915EBB59BD2B26AE42E062C245682BD`; original XBE SHA-256 `DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6`.
- Xbox link, post-link XBE diff and runtime remain pending.
