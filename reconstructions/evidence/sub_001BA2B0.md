# sub_001BA2B0

- Manifest: lot 137, position 84; address order. Candidate span: 17 bytes (0x001BA2B0 to exclusive end 0x001BA2C1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AA2B0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A9630. REA read_bytes evidence ev_eb49a559c2c4d95ec3a57f849f92cfcd0ac246b11ecf7536aa45f689afe5d824 returned 17 bytes. XBE raw = derived PE = split = REA; span SHA-256 0752ef242641a672c082de534c0f95e79207d8290b01a1fe74fdb0398ddee25c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 17 bytes.
- Source SHA-256 b38bd40976472457b3fa94cb5a4cbbfac787881cd4747996586d3b4b65430d19; compiled object SHA-256 42b54b9d998faa7c74c9108018bf33ef7277a0d979e8650445d5668796f1ddad; candidate object SHA-256 c23100820c1b3e172157bfc87b3d61872c3821bf4e19425f517c86a962b1823e.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
