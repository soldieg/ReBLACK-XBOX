# sub_00220ACC

- Manifest: lot 150, position 67; address order. Candidate span: 79 bytes (0x00220ACC to exclusive end 0x00220B1B).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x210B0C; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x20FE4C. REA read_bytes evidence ev_31478dcc9bf90784a18dfa34f9cc451feb6a1dbd5e270365b3c4e9c7f8b6a64b returned 79 bytes. XBE raw = derived PE = split = REA; span SHA-256 e0478a669226e595a6f4dbf10726fa88aaf470bc2cc2e7f36bfd7081bee448cd.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 79 bytes.
- Source SHA-256 8353682bc767bb624c31f5ec56a7ad8a1a4303bc7f5e02fd4891d2fb94ca0d7a; compiled object SHA-256 d9c11f1a0cf33788dace5564509974bf109738c5151d706c37cf8a625fb502ea; candidate object SHA-256 1c86549ed21dc7af88e25a9dcd5ed253972f389f3764dc63ea06822694334bb2.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
