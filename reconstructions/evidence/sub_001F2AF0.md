# sub_001F2AF0

- Manifest: lot 141, position 74; address order. Candidate span: 1 bytes (0x001F2AF0 to exclusive end 0x001F2AF1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2AF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1E70. REA read_bytes evidence ev_7e55de6f50e2eac0ac607d9de49899e285087829aa76514cbc79771d64e13add returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 d22d50d097c4221b8d3f3d86c589522904f195979a13974e04b59df213c7909f; compiled object SHA-256 b7db90f612e532a1214afd6c81056693d73a012101ce7f86b685270e9541d4e6; candidate object SHA-256 8390ad6f3968113d5b80734e16718de249adbfe0949cd56b86e839f7733b1ec7.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
