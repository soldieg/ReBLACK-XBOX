# sub_0020FDB0

- Manifest: lot 144, position 90; address order. Candidate span: 6 bytes (0x0020FDB0 to exclusive end 0x0020FDB6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1FFDB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1FF130. REA read_bytes evidence ev_aaab26a68a71740dd3756e13761f39f62843f4697b285bd9a1e41fd3f9ee7b1e returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 2db31f4e09597946e56e859813bfdad7046d457c32332c3a882654d1e3ffdf67.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 127ab2508c3de7e9c558dbf378bcb4dd72ee89fcb436f1f54b0d24a9c24ea175; compiled object SHA-256 5f98a4424a73426c9488874f42fde68cd971055e4151297db76245a6c3723b62; candidate object SHA-256 2e0e00860bf5aee667cb4a00e33e71e9c8fef00c2ade6c10a3537cf6937c3e59.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
