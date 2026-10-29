# sub_001B5BD0

- Manifest: lot 135, position 58; address order. Candidate span: 8 bytes (0x001B5BD0 to exclusive end 0x001B5BD8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A5BD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A4F50. REA read_bytes evidence ev_db4a633ea42cd1397789c96aa81737459e9994d14152754733a67323f03aaa61 returned 8 bytes. XBE raw = derived PE = split = REA; span SHA-256 689757ea3b2d6a18f98268a284aca2bc66b237550dac30b39366a745d703f2e1.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 8 bytes.
- Source SHA-256 72b471f280d53fb559dd76f8abbcc26746e8e6c1052db9bd1de6c4a895871e5c; compiled object SHA-256 82fca169de79b48cc94ffa6460dfc40c7a85dcfec6bc31a8106c31934fd31d36; candidate object SHA-256 5c46cae75c3f4d99a416f42c0ace3a96835cd23c477da1255a3fea1c5bf40d7f.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
