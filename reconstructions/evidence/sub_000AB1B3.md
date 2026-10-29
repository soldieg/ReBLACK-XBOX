# sub_000AB1B3

- Manifest: lot 106, position 80; address order. Candidate span: 24 bytes (0x000AB1B3 to exclusive end 0x000AB1CB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9B1B3; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9A533. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 24 bytes. XBE raw = derived PE = split = REA; span SHA-256 a2eaeda1bdc174119d9d42d7da58a85db8af00941540f7b4eb5c94b772ee61cd.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 24 bytes.
- Source SHA-256 02283e7b18f8d7d8457acbb4bca756cdda84bff69dfc2d78a38978d9b12b1dac; compiled object SHA-256 66ef9a18f01805bde359ea338a6d9e6d2a9cc7e46ceef0df2837f05a72c2c4c6; candidate object SHA-256 1203860fb8b842433397644e692349b48af805a31aac3a35cda0e9d7600920f7.
- GitHub Issue: #9908 (https://github.com/soldieg/ReBLACK-XBOX/issues/9908).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
