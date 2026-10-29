# sub_000BEBB0

- Manifest: lot 109, position 25; address order. Candidate span: 4 bytes (0x000BEBB0 to exclusive end 0x000BEBB4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEBB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADF30. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 efb482a04b0cbb00f7af68a92c91125eaee3ee997e317a89888535156cee0fe4.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 883448ddd698a158995945a461ad42aee1157bf05afc763b9a122c264f90c1a7; compiled object SHA-256 c4f8cfc404102d24144359c297f3ed6d64b86d6d4016a77d1d0a35177e15b9c0; candidate object SHA-256 57f30ea4efaa64ed999d0262b122dfb365d4e7857389cbcb20e7170722ee40c6.
- GitHub Issue: #10135 (https://github.com/soldieg/ReBLACK-XBOX/issues/10135).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
