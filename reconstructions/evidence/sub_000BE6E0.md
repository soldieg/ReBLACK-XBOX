# sub_000BE6E0

- Manifest: lot 109, position 6; address order. Candidate span: 16 bytes (0x000BE6E0 to exclusive end 0x000BE6F0).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAE6E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADA60. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 16 bytes. XBE raw = derived PE = split = REA; span SHA-256 f252b5f38b81e002519f41fb80b261de6ae7ee3a93d8b1fb55b8c629da7ea44b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 16 bytes.
- Source SHA-256 b6407d1a6f2a6a4cf6ff9318df308336d75bab90ba00fcd5c3dde497019de2c2; compiled object SHA-256 4abf5a86549df4c66976e9e19872f4a467f739d8b580c7f4c724246a32dd2aac; candidate object SHA-256 3a684498c1f921c581dfda625d8d6cc9aef06804746d90aca5cede1fe0ae40a5.
- GitHub Issue: #10118 (https://github.com/soldieg/ReBLACK-XBOX/issues/10118).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
