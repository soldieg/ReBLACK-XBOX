# sub_001BD1F0

- Manifest: lot 138, position 22; address order. Candidate span: 27 bytes (0x001BD1F0 to exclusive end 0x001BD20B).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AD1F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AC570. REA read_bytes evidence ev_c7774626e44ed152dbd82c0bb4f95450585a117e7a33f369458a369251a907e2 returned 27 bytes. XBE raw = derived PE = split = REA; span SHA-256 7a8e8e1d170568696a0f637fd2d2ed0510e77301ee348fc89cac625a8cb4e5dd.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 27 bytes.
- Source SHA-256 fbf615698a3f1acd6f5444d89f7b2a444f800e6cb638809f765a8734a291c94b; compiled object SHA-256 459342184446acc43dbe19cf07fb90375703a528ea2bd4f6662cd2b1ab276762; candidate object SHA-256 3e716415ddabf90c4681ba6799c5c36e0e743bd5f52d70e230b62b2b38bb2532.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
