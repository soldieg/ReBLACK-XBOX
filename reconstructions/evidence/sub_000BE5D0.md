# sub_000BE5D0

- Manifest: lot 109, position 2; address order. Candidate span: 13 bytes (0x000BE5D0 to exclusive end 0x000BE5DD).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAE5D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAD950. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 13 bytes. XBE raw = derived PE = split = REA; span SHA-256 7b4422b1a4f7628a8c077b0873e8b5a01a5150e08f3fb03d1967291c42b75a47.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 13 bytes.
- Source SHA-256 ce1a2030d40a6c14d7475a4242d08e00ea502732384b88dba293134565bddb81; compiled object SHA-256 f7271bdedfb8602c75469787b2dcef355a8e8b270d86830a5d1d89b0561f19dc; candidate object SHA-256 315199a280934621507588352ed72650dae8f5005e6f7fc97fb06c20578fe019.
- GitHub Issue: #10116 (https://github.com/soldieg/ReBLACK-XBOX/issues/10116).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
