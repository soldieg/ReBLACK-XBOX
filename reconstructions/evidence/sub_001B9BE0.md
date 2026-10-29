# sub_001B9BE0

- Manifest: lot 137, position 52; address order. Candidate span: 27 bytes (0x001B9BE0 to exclusive end 0x001B9BFB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A9BE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A8F60. REA read_bytes evidence ev_3d252c9c15f66f40b5f9ff057e756b1170b2e07b9adcb5c797b5d34c111044be returned 27 bytes. XBE raw = derived PE = split = REA; span SHA-256 0961d09d83170b968be62fbb7ac3fa6212274827cc8dcd89ef3db2b81457fed6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 27 bytes.
- Source SHA-256 3c647a15b65e42605acd97acc08663a3cf56e5eab136a0d218b324f6752ec172; compiled object SHA-256 3f24166bc42aa345986f322a49a0b82bd25a5979039935ee9354baa71a040302; candidate object SHA-256 7c5f2dcc4406021009629f799cb4deb4544b21063ee4ee400a06d885a85b1981.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
