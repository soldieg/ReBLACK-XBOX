# sub_000BEC60

- Manifest: lot 109, position 31; address order. Candidate span: 23 bytes (0x000BEC60 to exclusive end 0x000BEC77).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEC60; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADFE0. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 23 bytes. XBE raw = derived PE = split = REA; span SHA-256 010c41a64be4eee0aa18b8c1a0d71573703eef72dba883a79aa41fb944d846b3.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 23 bytes.
- Source SHA-256 f450aa94e56682ed66cba2e9bd54e4c2eee56caf14eaea983903b9e30e0c9ba2; compiled object SHA-256 6aa39346c87175d5acfe139f965e4b5163b32b4868b98a52b496170335cad0c4; candidate object SHA-256 bb30509030ef2eb83e5dfd48ca013e91931030b6c7c377a408e316efd01aafee.
- GitHub Issue: #10138 (https://github.com/soldieg/ReBLACK-XBOX/issues/10138).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
