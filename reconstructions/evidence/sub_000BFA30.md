# sub_000BFA30

- Manifest: lot 109, position 100; address order. Candidate span: 38 bytes (0x000BFA30 to exclusive end 0x000BFA56).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFA30; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAEDB0. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 38 bytes. XBE raw = derived PE = split = REA; span SHA-256 9068d8b621a8bd9505be742e63c1199e36352627220bfb7055731604c1712d59.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 38 bytes.
- Source SHA-256 8dc3cd2b314acb06ec7f36a68d0a3381b348752363b24e3c6ca2ba6164d3ee03; compiled object SHA-256 efd116f7ff0d8b3847c402be60435af93413f2ec4e9bfd8363102218a9d0e454; candidate object SHA-256 a8849439b50ac9c965e4f4b4f0ec8a6c8b99788f490861c3f6f5cb8ef5254d22.
- GitHub Issue: #10195 (https://github.com/soldieg/ReBLACK-XBOX/issues/10195).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
