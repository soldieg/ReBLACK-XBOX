# sub_001BDDB0

- Manifest: lot 138, position 42; address order. Candidate span: 1 bytes (0x001BDDB0 to exclusive end 0x001BDDB1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ADDB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AD130. REA read_bytes evidence ev_a7b6aef385acce28b4a3e08e38662427fd831f125b10ebac4d0b7bd3b1d26568 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 3bf3660b96a43a0988796a9f35cb6edf7a3cf6451b84770859b1127a5e305259; compiled object SHA-256 e4313426edee43910d1e9a71af89e8098c6b94b1e049bb07a9846ba6a2a5b462; candidate object SHA-256 11f8241107727e3062fc39cc7734f10d2c320cbcb75276b6ac9bffc56b1e782c.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
