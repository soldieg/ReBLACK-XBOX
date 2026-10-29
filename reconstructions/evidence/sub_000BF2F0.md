# sub_000BF2F0

- Manifest: lot 109, position 61; address order. Candidate span: 6 bytes (0x000BF2F0 to exclusive end 0x000BF2F6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF2F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE670. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 3fd55919f00b3a3ccaeacc72eda40286bc42280ec917d71f58bc606e5f98ceed.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 be743c73465fa368a86885442e194c22cb547e31ac528d379fc6c27a5fbdcce5; compiled object SHA-256 03d4fcfa964df1851b21118f3910ac32bb34c0921ca5667214caba0047e0e8e3; candidate object SHA-256 4e960e55481a82f38a7acce22b241ae4032956b58ea64abe669a4505b1c5bec0.
- GitHub Issue: #10160 (https://github.com/soldieg/ReBLACK-XBOX/issues/10160).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
