# sub_000BEE00

- Manifest: lot 109, position 41; address order. Candidate span: 24 bytes (0x000BEE00 to exclusive end 0x000BEE18).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEE00; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE180. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 24 bytes. XBE raw = derived PE = split = REA; span SHA-256 7eb78dfd1598f44ac3149c6414955ef000d52bf007da3e9e1a95d290e52f0b0c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 24 bytes.
- Source SHA-256 ba60c129981da2c8aa6c029aab6782013d4f056b9bebecdcb8fb02dcd62e56b4; compiled object SHA-256 9827e0f79a60d9f6d21d3238621e052c2984ce0e6bd5e6c032f4f847765a2d57; candidate object SHA-256 d50a04167e9bbddf52fdd77d54ee08785c0bd628caab459df8c2b40fc6d39956.
- GitHub Issue: #10146 (https://github.com/soldieg/ReBLACK-XBOX/issues/10146).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
