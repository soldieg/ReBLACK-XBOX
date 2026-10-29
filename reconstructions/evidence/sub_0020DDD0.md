# sub_0020DDD0

- Manifest: lot 144, position 62; address order. Candidate span: 37 bytes (0x0020DDD0 to exclusive end 0x0020DDF5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1FDDD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1FD150. REA read_bytes evidence ev_f406b7ad3771079ac21f65dd313aacd9131ed79b0e5021d336d5a68e63ce7d90 returned 37 bytes. XBE raw = derived PE = split = REA; span SHA-256 fe90d9a35f6325788c8ed92e6285f5e73460c58ac772a4fbd0f0c1238a9f2d82.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 37 bytes.
- Source SHA-256 acf4d26281b2863cda779730da82a54d8bc6bb93cadaca326155fca20d1d0173; compiled object SHA-256 5d9beeb5710decd9bc05f4ef9bf5c95f8e02552627ee9d3a86f974db4fb00469; candidate object SHA-256 e3330d5a420d5732b8db57a0d6e5e09eff3e4182dc75a0397ea8318100aa057e.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
