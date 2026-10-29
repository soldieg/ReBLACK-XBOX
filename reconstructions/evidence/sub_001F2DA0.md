# sub_001F2DA0

- Manifest: lot 142, position 4; address order. Candidate span: 3 bytes (0x001F2DA0 to exclusive end 0x001F2DA3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2DA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E2120. REA read_bytes evidence ev_8e78095b80e903932c1b0145ebaecb557c5da25fe09d7001cf347293f72d8074 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 bd7993ef64ba45fa9e4d7f3e0cc2f340c99a34362a6ba362f1d4e59178c63b57; compiled object SHA-256 6f8904c050b16dc50622887f16b941499cdf25f3c64975d02d682d1610b42ae9; candidate object SHA-256 e73301df059397e5659f7d3c7b048874e8c86c303615fe4396e4f5a0e54dcda2.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
