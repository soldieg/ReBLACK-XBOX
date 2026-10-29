Candidate `sub_001CFA50` - manifest lot 139, position 36; address `0x001CFA50`; candidate span 122 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001cfa50`; body 119 bytes in 2 ranges: `0x001cfa50-0x001cfa9c; 0x001cfaa0-0x001cfac9`; 1 direct callers, 1 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_195a7e886ae6feda4e514317058c4e7a12b578f0fd0bb546ad1295a53e24a584`.
- Non-body gap bytes in the span, decoded by split disassembly as alignment: `0x001cfa9d-0x001cfa9f` = `8d 49 00` (0x001cfa9d lea ecx, [ecx]).
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1bfa50` equal split `.s` bytes, 122/122; byte SHA-256 `ca790911a0f09f0a4e9ab6a5df9ece3a921e674198f4b31aec51a3f3b320427e`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `633cba4f9a921a816d6b3dde799214c9a0b1405e8e2b52acd17f20a6b504cee5`.

## Lot 139 manifest candidate evidence (2026-10-29)

- Manifest: lot 139, position 36; address order. Candidate span: 122 bytes (0x001CFA50 to exclusive end 0x001CFACA).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001eb286@001eb1f0. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1BFA50; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1BEDD0. REA read_bytes evidence ev_66e5782c6d0d2340ac79a825e4313058348e87d19f46387ae1555a4d5cbef021 returned 122 bytes. XBE raw = derived PE = split = REA; span SHA-256 ca790911a0f09f0a4e9ab6a5df9ece3a921e674198f4b31aec51a3f3b320427e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 122 bytes.
- Source SHA-256 633cba4f9a921a816d6b3dde799214c9a0b1405e8e2b52acd17f20a6b504cee5; compiled object SHA-256 9c760454b4b55b9e439a5026c188c637cec0b5981d9772537a37a0ed3fb5f3c7; candidate object SHA-256 9d79ed4efd1e3f7375f7404c08d32e2c31e2b88d90f28694759ffc11a8f50d82.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
