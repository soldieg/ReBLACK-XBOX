# sub_000BEC10

- Manifest: lot 109, position 28; address order. Candidate span: 24 bytes (0x000BEC10 to exclusive end 0x000BEC28).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEC10; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADF90. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 24 bytes. XBE raw = derived PE = split = REA; span SHA-256 06ccd89b4d2b6d6824864613ac421730ead27d657be8d842558184ab31fb42f6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 24 bytes.
- Source SHA-256 bf94ec050bb937fc0df6999e403d1787e263825ec60ff5114b54dd21aba55de4; compiled object SHA-256 bc1e9496f0ca01e0bf319ccf9902f85fac2472c7ef7b76602fc56d489a0e96f5; candidate object SHA-256 dd51403fb2f59a6ce5fde9d2c2cc6fdeeab487272ee2fb8f6173c4eb30a3a858.
- GitHub Issue: #10133 (https://github.com/soldieg/ReBLACK-XBOX/issues/10133).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
