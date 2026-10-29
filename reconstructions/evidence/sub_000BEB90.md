# sub_000BEB90

- Manifest: lot 109, position 23; address order. Candidate span: 5 bytes (0x000BEB90 to exclusive end 0x000BEB95).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEB90; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADF10. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 5 bytes. XBE raw = derived PE = split = REA; span SHA-256 2578bf9fcbe58f262edb99b7e854a146a3118fe35e444aebf1becf2d9fc62e63.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 5 bytes.
- Source SHA-256 edae34a45aa1dbc9695eb781ef505e7fcd31755f23bd901b0f0e424dc09ec0f8; compiled object SHA-256 28549c3e741bb1781950a07137a9cdef192209e635af4d780fbcfcf9875c2467; candidate object SHA-256 936161cff6ab0e9c8b03fce5cd49057e4be6c7fb73533283156509b308d34f0a.
- GitHub Issue: #10130 (https://github.com/soldieg/ReBLACK-XBOX/issues/10130).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
