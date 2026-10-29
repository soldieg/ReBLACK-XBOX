Candidate `sub_001BE6A0` - manifest lot 138, position 53; address `0x001BE6A0`; candidate span 101 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001be6a0`; body 98 bytes in ranges `0x1be6a0-0x1be6bc; 0x1be6c0-0x1be704`; 1 direct callers, 0 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_d566c43faa4b80eb9b485686edbc85d9551469e03fa3eb99ccae8786c2593fce`.
- Non-body gaps included in the manifest span: `0x001be6bd-0x001be6bf` = `8d 49 00`.
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1ae6a0` equal split `.s` bytes, 101/101; byte SHA-256 `23e58aea319baaa3ee2751151afa9d4b914119aa0f8144cd74658987005f0018`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `7801e4dd9bd8b737f8d51d49b9620be20d5ef815b5991da085437b16bcfc8569`.

## Lot 138 manifest candidate evidence (2026-10-29)

- Manifest: lot 138, position 53; address order. Candidate span: 101 bytes (0x001BE6A0 to exclusive end 0x001BE705).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001d883c@001d77a0. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AE6A0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1ADA20. REA read_bytes evidence ev_019a1671894d45979bac89f84605e3ade549dff0dde93095394b6b51c1979e0d returned 101 bytes. XBE raw = derived PE = split = REA; span SHA-256 23e58aea319baaa3ee2751151afa9d4b914119aa0f8144cd74658987005f0018.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 101 bytes.
- Source SHA-256 7801e4dd9bd8b737f8d51d49b9620be20d5ef815b5991da085437b16bcfc8569; compiled object SHA-256 740eb1923c7e7d6e862ec04db2d77dd7f714e17ceed6aebdd9b6dd4dece364c0; candidate object SHA-256 52a3451633c06de8f5e9a2f84da821e3e8820d2f7b421a07d9bce8a9cab43b67.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
