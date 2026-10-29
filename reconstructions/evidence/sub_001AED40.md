Candidate `sub_001AED40` - manifest lot 134, position 5; address `0x001AED40`; candidate span 503 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001aed40`; body 495 bytes in ranges `0x1aed40-0x1aed57; 0x1aed60-0x1aef36`; 1 direct callers, 3 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_2f531b812b96147e6197542d114e59674eca4686e6a91bf130768ff0f43c867b`.
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x19ed40` equal split `.s` bytes, 503/503; byte SHA-256 `b7430c83b44af7882f88f0673e69e7b7e1b3ac02e52612e51b2a8e2366f35f1e`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics.
- Source SHA-256 `9d358cbb55db2d9263bef4bb7b52dc387433aa2ca63da8af0915e663cbeeb53a`.
- Ghidra omitted gap `0x1aed58-0x1aed5f`; split bytes are `LEA ESP,[ESP]` plus `NOP` (`8d a4 24 00 00 00 00 90`).

## Lot 134 manifest candidate evidence (2026-10-29)

- Manifest: lot 134, position 5; address order. Candidate span: 503 bytes (0x001AED40 to exclusive end 0x001AEF37).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001af16f@001aef40. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x19ED40; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x19E0C0. REA read_bytes evidence ev_d72452ff44957de16623b13d2c8a9f8a1b820a515635e871292f0604b57c4a73 returned 503 bytes. XBE raw = derived PE = split = REA; span SHA-256 b7430c83b44af7882f88f0673e69e7b7e1b3ac02e52612e51b2a8e2366f35f1e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 503 bytes.
- Source SHA-256 9d358cbb55db2d9263bef4bb7b52dc387433aa2ca63da8af0915e663cbeeb53a; compiled object SHA-256 f3f50326ac74f855f1c363d4792da11c4f29bbe6391e66d3ef137f1a7bce06f2; candidate object SHA-256 e9ca1215206a6cce1eefa06002a2f2c82eec2d0e527d529eac36828076c374c5.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
