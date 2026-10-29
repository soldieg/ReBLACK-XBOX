# sub_001BEE40

- Manifest: lot 138, position 58; address order. Candidate span: 17 bytes (0x001BEE40 to exclusive end 0x001BEE51).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AEE40; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AE1C0. REA read_bytes evidence ev_b97180970aaee2e34ec5c5793f4101c0756d29367d5ed06ca03567d8721ae3d4 returned 17 bytes. XBE raw = derived PE = split = REA; span SHA-256 0752ef242641a672c082de534c0f95e79207d8290b01a1fe74fdb0398ddee25c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 17 bytes.
- Source SHA-256 56dfa12ae06d45f9ca665243f1d5947492410207dd9bebfe10ef58f33562a27a; compiled object SHA-256 e7f92cb7ac6f9a5f79a50a81a3089df9b0b947a233f6a5327b293989a9cc8ba7; candidate object SHA-256 72df8fa865efb820e9f39ad53872d9cc6bddd5ccc2d0ffdd983562eef91d94e4.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
