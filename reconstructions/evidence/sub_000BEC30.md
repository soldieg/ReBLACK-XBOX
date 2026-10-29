# sub_000BEC30

- Manifest: lot 109, position 29; address order. Candidate span: 3 bytes (0x000BEC30 to exclusive end 0x000BEC33).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEC30; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADFB0. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 4bc724f3b1d0caf4fe369c18cba3102e6c4ea057f63fe1587e3973134a7f755e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 5faf1cc592cf54bedb4e7f32e3fc8456986937b8dafbb013a413850c8c94d337; compiled object SHA-256 240261fe7b4a4835eea6cdbd84fd61494dbd053ac8d7abfd4c82feca564cfccd; candidate object SHA-256 761fd84d7aa79d45111748054148b7ba558a988a87c94019e57e383b0d0d6e11.
- GitHub Issue: #10134 (https://github.com/soldieg/ReBLACK-XBOX/issues/10134).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
