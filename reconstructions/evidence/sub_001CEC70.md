Candidate `sub_001CEC70` - manifest lot 139, position 34; address `0x001CEC70`; candidate span 179 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001cec70`; body 176 bytes in 2 ranges: `0x001cec70-0x001cecac; 0x001cecb0-0x001ced22`; 1 direct callers, 2 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_1e848943359a22f08040c81fbafba3da3c0642ac17501349160d9c70ffb3d6d2`.
- Non-body gap bytes in the span, decoded by split disassembly as alignment: `0x001cecad-0x001cecaf` = `8d 49 00` (0x001cecad lea ecx, [ecx]).
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1bec70` equal split `.s` bytes, 179/179; byte SHA-256 `1e69d2eb2fc2f6c3a2be873287487cf8709010efb0264f0f1a3b347b14d8f0d8`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `0fdc7cd3bf2f4f3c50387926aa85e50bce08273227d5d6b54734c04d861591d4`.

## Lot 139 manifest candidate evidence (2026-10-29)

- Manifest: lot 139, position 34; address order. Candidate span: 179 bytes (0x001CEC70 to exclusive end 0x001CED23).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001e1d06@001e1800. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1BEC70; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1BDFF0. REA read_bytes evidence ev_a37c1abff72c67297ddb39e0b5e207bfad3e151614a67cc0641f496e079341d8 returned 179 bytes. XBE raw = derived PE = split = REA; span SHA-256 1e69d2eb2fc2f6c3a2be873287487cf8709010efb0264f0f1a3b347b14d8f0d8.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 179 bytes.
- Source SHA-256 0fdc7cd3bf2f4f3c50387926aa85e50bce08273227d5d6b54734c04d861591d4; compiled object SHA-256 71655075f18426cd04189dc39edb4d053ac6cc550db970b7866fcd596da4ff77; candidate object SHA-256 8021f81a0498cd7c7ad20ba5e5219109991acb8da28077f5ded1dfe85f3735d1.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
