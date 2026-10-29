# sub_000BF1D0

- Manifest: lot 109, position 59; address order. Candidate span: 4 bytes (0x000BF1D0 to exclusive end 0x000BF1D4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF1D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE550. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 c97103bb52a7dca2dac35167e7fc66b6f117b1ac0dff8e2a05275220ad009e8c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 2c53507bbef36f420e151d8eb02baf2fffdf6ec946fa769f898b22f2811876a6; compiled object SHA-256 61c3b8faf89157751cccd6051d8d5c9a5485aed9635a4c2f77d08b4a04b71c43; candidate object SHA-256 e7a34f3f9129244f79af9da0abed0b6d8da990eaddbe60b8b026b0dcbbeb4197.
- GitHub Issue: #10159 (https://github.com/soldieg/ReBLACK-XBOX/issues/10159).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
