Candidate `sub_001CBDB0` - manifest lot 139, position 20; address `0x001CBDB0`; candidate span 336 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001cbdb0`; body 333 bytes in 2 ranges: `0x001cbdb0-0x001cbe0c; 0x001cbe10-0x001cbeff`; 0 direct callers, 2 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_6697ac738c0e3cec3adb9bbf5ea92597fbd6993bf7f8a3df5d5c4b8fe9428d22`.
- Non-body gap bytes in the span, decoded by split disassembly as alignment: `0x001cbe0d-0x001cbe0f` = `8d 49 00` (0x001cbe0d lea ecx, [ecx]).
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1bbdb0` equal split `.s` bytes, 336/336; byte SHA-256 `5b7286a86324e87a9393df4c42c9310f947366d3eb7d98a1ea188989cb0fd648`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `a5b6ae63a613da7daa075930c7127485f13035e6a56d9b39d7e4bedc8ad70651`.

## Lot 139 manifest candidate evidence (2026-10-29)

- Manifest: lot 139, position 20; address order. Candidate span: 336 bytes (0x001CBDB0 to exclusive end 0x001CBF00).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1BBDB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1BB130. REA read_bytes evidence ev_89880138703240c172b443865bec76a4f633ed36adb9d6c990e6df35314c9d59 returned 336 bytes. XBE raw = derived PE = split = REA; span SHA-256 5b7286a86324e87a9393df4c42c9310f947366d3eb7d98a1ea188989cb0fd648.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 336 bytes.
- Source SHA-256 a5b6ae63a613da7daa075930c7127485f13035e6a56d9b39d7e4bedc8ad70651; compiled object SHA-256 9d1c6c10089e76935dc53a5d35f7adcd58d66f88d5fc98ab9de19b6066d26d85; candidate object SHA-256 8bf4941fe0a311f8fffe718d8dbc2cd8e64d70b11261249029037cd84ef3cd41.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
