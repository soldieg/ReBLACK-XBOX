# sub_001F5AF0

- Manifest: lot 143, position 29; address order. Candidate span: 3 bytes (0x001F5AF0 to exclusive end 0x001F5AF3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E5AF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E4E70. REA read_bytes evidence ev_9dd379e6d3773a8740382f5a4136144e11a742d7d7074c0e4f101ff33d4f07c1 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 01cb47d078b4841b8408ec4fe278efa83115c6f6e101972987507d2b2b57dcf0.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 119b80d6f841a03d06983a4a5b89a71ad5f18fb73a0151b132410f8d043a1c50; compiled object SHA-256 06188b13037414d86ae639919bb1305b045f873fab67b4f0fe7ccf1d78fb953d; candidate object SHA-256 ab497c94787a5a9db3b2778a03ad002c3a126933792f45facabf536af53a5981.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
