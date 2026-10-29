# sub_001F2BA0

- Manifest: lot 141, position 85; address order. Candidate span: 1 bytes (0x001F2BA0 to exclusive end 0x001F2BA1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2BA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1F20. REA read_bytes evidence ev_eb1563f0ec16fcebc2147f75d3717a61bfa3848d03745a833a529521d3378af9 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 6b7b81c089f4598b008c42a24aca1561bd2cad202de29f2fa5d29ea9e84362ee; compiled object SHA-256 4194b5c0d49644ad0911e07269f94d1495e52c532edef63575d024ef92d06cb7; candidate object SHA-256 6ccb82831904b74340472e89e726493148678e6a8e24c24ef476cadffbe3d4c2.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
