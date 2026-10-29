# sub_001B4CB0

- Manifest: lot 134, position 71; address order. Candidate span: 14 bytes (0x001B4CB0 to exclusive end 0x001B4CBE).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A4CB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A4030. REA read_bytes evidence ev_5495f8d6ebd9f0dac9b3d6935465f7ed0dce0a18f8b9235b1ea8521ef5d0a1d8 returned 14 bytes. XBE raw = derived PE = split = REA; span SHA-256 9e335f96d20afc73228bb5223e5a421d0d26aae7718e10f86d9262eedf78b268.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 14 bytes.
- Source SHA-256 0a814af21693cfb99a783b166830e136dcd5438e650477b3ebf686c701279dcb; compiled object SHA-256 b209799ab9fedbc554249cd8042ac62118489959dd011d8139bf0ea84d7215ea; candidate object SHA-256 c7f99f33e2b2cabd0e6e34ef12d368a6bd3467fe44b4a9a870356ac1f8a5f437.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
