# sub_000BECF0

- Manifest: lot 109, position 36; address order. Candidate span: 68 bytes (0x000BECF0 to exclusive end 0x000BED34).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAECF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE070. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 68 bytes. XBE raw = derived PE = split = REA; span SHA-256 ea351c0fa6e9b122ec8d5c76296c0638744591a60c2ef81a126b7ee7296e7ad9.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 68 bytes.
- Source SHA-256 218d1396d894fda82bcb4648d713c8d7a3f870e3d125c59843e66b2891ef58fe; compiled object SHA-256 b1354658132f904b3dc3575f6c9abbc2669cb3139ff53c4f3915e98f76ae1a59; candidate object SHA-256 fabef199c31930248bf7c14a925b42416f234e32934d02283a9889e0d1338948.
- GitHub Issue: #10142 (https://github.com/soldieg/ReBLACK-XBOX/issues/10142).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
