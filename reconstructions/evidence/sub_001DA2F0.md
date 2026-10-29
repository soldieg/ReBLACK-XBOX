Candidate `sub_001DA2F0` - manifest lot 139, position 77; address `0x001DA2F0`; candidate span 169 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001da2f0`; body 161 bytes in 2 ranges: `0x001da2f0-0x001da367; 0x001da370-0x001da398`; 1 direct callers, 1 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_7691c0d9c2d45fe59912aa54bb301700974f0f2eaa15ea360e8bdca9ba2c4ba3`.
- Non-body gap bytes in the span, decoded by split disassembly as alignment: `0x001da368-0x001da36f` = `8d a4 24 00 00 00 00 90` (0x001da368 lea esp, [esp]; 0x001da36f nop).
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1ca2f0` equal split `.s` bytes, 169/169; byte SHA-256 `9696067cb8cdad6335b6762e636f7b50e71d8a8bf05e2bfb5633f5cc2a4dab4a`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `09d0b5f934149f76d8161a655afa33adffc4c2ed3930f634e7f67d7be5eddc18`.

## Lot 139 manifest candidate evidence (2026-10-29)

- Manifest: lot 139, position 77; address order. Candidate span: 169 bytes (0x001DA2F0 to exclusive end 0x001DA399).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001eb427@001eb1f0. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1CA2F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1C9670. REA read_bytes evidence ev_9e33b13f19d7ec7eba9a3805e5fc4a175ffe1679df03485e896e31e4e14ce1f1 returned 169 bytes. XBE raw = derived PE = split = REA; span SHA-256 9696067cb8cdad6335b6762e636f7b50e71d8a8bf05e2bfb5633f5cc2a4dab4a.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 169 bytes.
- Source SHA-256 09d0b5f934149f76d8161a655afa33adffc4c2ed3930f634e7f67d7be5eddc18; compiled object SHA-256 edfb8ac7ed3c7eba7cd33f3dc73a88f20b804804fb476ab369a64b9323cccf99; candidate object SHA-256 8274b039e457ec88168a54a9d7588892d8505142048ad741f21b94b381496e31.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
