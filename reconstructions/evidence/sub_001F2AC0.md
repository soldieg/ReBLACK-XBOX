# sub_001F2AC0

- Manifest: lot 141, position 71; address order. Candidate span: 1 bytes (0x001F2AC0 to exclusive end 0x001F2AC1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2AC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1E40. REA read_bytes evidence ev_7dbf0db4c37589a5288832d3ed26f85c8f443d9dfe693425e7f61523de020321 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 0561c43b2861fa7a2f6459500f59f7308ff417aefc47e6b39ee045835d46eeb4; compiled object SHA-256 65894d46d07433be7c24a8ffa7ebb6d8ebb00328e16ebca6e1dd8f99d4e88ffb; candidate object SHA-256 ef18122e0b78f0d21c302234277be425de500656fa34a1eb22fe22754a4396ce.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
