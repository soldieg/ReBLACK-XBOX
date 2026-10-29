# sub_001B5AB0

- Manifest: lot 135, position 45; address order. Candidate span: 3 bytes (0x001B5AB0 to exclusive end 0x001B5AB3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A5AB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A4E30. REA read_bytes evidence ev_1c5d73975d507035624d51fd9eddd73bf24cd59c37adfbdfe720681af3c27d32 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 98bd39cf06048c1ecd4abcd7a3e54e28cfda1a850a648d396e270dae4f38c2f3; compiled object SHA-256 b1e2b63ce6224ca45000e6cb292ddfb53cd95e3bfae36784c4903ab10df2eb4a; candidate object SHA-256 a987ccb06d0a99ec9d5f03aa913259216ad3502c6f42dae4c57835861e2c0db6.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
