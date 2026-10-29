Candidate `sub_001BBC00` - manifest lot 138, position 9; address `0x001BBC00`; candidate span 146 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001bbc00`; body 140 bytes in ranges `0x1bbc00-0x1bbc19; 0x1bbc20-0x1bbc91`; 1 direct callers, 3 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_10046a0ae1906f1b11cfec42e67852c68a2ed2b960276e3db4b5159c5d87957e`.
- Non-body gaps included in the manifest span: `0x001bbc1a-0x001bbc1f` = `8d 9b 00 00 00 00`.
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1abc00` equal split `.s` bytes, 146/146; byte SHA-256 `c5efa915ff731c0f9ad8c73c2859774525a98e49a21f1be180fb8a24f1db66a2`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `fcf9785ddef1160b33ac5e6637810d084cbee9397946e1e99dd74936e218e6f1`.

## Lot 138 manifest candidate evidence (2026-10-29)

- Manifest: lot 138, position 9; address order. Candidate span: 146 bytes (0x001BBC00 to exclusive end 0x001BBC92).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001eb676@001eb440. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ABC00; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AAF80. REA read_bytes evidence ev_de6c31513c9b413826987e618beebd080325649078206386bff971e64543b55c returned 146 bytes. XBE raw = derived PE = split = REA; span SHA-256 c5efa915ff731c0f9ad8c73c2859774525a98e49a21f1be180fb8a24f1db66a2.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 146 bytes.
- Source SHA-256 fcf9785ddef1160b33ac5e6637810d084cbee9397946e1e99dd74936e218e6f1; compiled object SHA-256 74a760cb473f1a393c9e0210ceee56415698780c1579c1a804491bcc2d4f9e29; candidate object SHA-256 4f9b537e29e6f2e513b69decaeeab81e8130db5fc7d3d345fc502e225fed4b30.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
