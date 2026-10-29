# sub_001F1BC0

- Manifest: lot 140, position 68; address order. Candidate span: 3 bytes (0x001F1BC0 to exclusive end 0x001F1BC3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E1BC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E0F40. REA read_bytes evidence ev_f58cc5eb460407c17739346a6edf2012a2244164bc26b6f937e68c15833f3a1c returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 01cb47d078b4841b8408ec4fe278efa83115c6f6e101972987507d2b2b57dcf0.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 ecfbd26354cbc321fa928db0952eda7a4e4b3e9d9af8db87edc6d7002c02a50f; compiled object SHA-256 97b47a2e5e75090271a833ac6d460f50118b92d9f24e0b771193079d8d16c475; candidate object SHA-256 9242846efe63c219f45e30532cee0f5b2a3a0353c938a9ae892f1b5349b121c6.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
