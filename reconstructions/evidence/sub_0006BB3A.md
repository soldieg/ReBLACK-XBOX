# sub_0006BB3A

- Manifest: lot 104, position 37; address order. Candidate span: 857 bytes (0x0006BB3A to exclusive end 0x0006BE93).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x5BB3A; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x5AEBA. REA read_bytes evidence ev_41e453980d017062d608a7536b270bd6a72dfc5f3019c1c7f17cbce40ab5a09e returned 857 bytes. XBE raw = derived PE = split = REA; span SHA-256 b386516bfff3ed1515b7f9f1dc2d57b8fae958c58a32667b5bbaaa024cc7a77e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 857 bytes.
- Source SHA-256 6fb5e0d04f7b4a9ba5310b939d5ad8f35dedbd8e26867b7f4d1cccf3ba574a0a; compiled object SHA-256 9238db47e1c6bc881c79d5b4e77e41d348d6a57633631bc9a01b36110e757e92; candidate object SHA-256 ca64e5c1df5cbbf3bd55835bd93decf40bd297437fea97f83b1ab9a8e1813779.
- GitHub Issue: #9701 (https://github.com/soldieg/ReBLACK-XBOX/issues/9701).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
