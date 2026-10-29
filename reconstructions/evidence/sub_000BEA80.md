# sub_000BEA80

- Manifest: lot 109, position 20; address order. Candidate span: 34 bytes (0x000BEA80 to exclusive end 0x000BEAA2).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEA80; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADE00. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 34 bytes. XBE raw = derived PE = split = REA; span SHA-256 956931197e8a7f0fcb3f5f94234e3e2ee54ea0bc3930b7396941ddca55ffa577.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 34 bytes.
- Source SHA-256 a07bb1c4786fbc8986057fbc1986913f6ee23d29a8ebbcd150ad84d43b4001f2; compiled object SHA-256 c1ea685ffc1958d30ef2ab9e692066987de4f764d3b1feaf7608a9f4bfe1ad97; candidate object SHA-256 0234727e4a8e30656c7028be1dee33f41483e0afd4e26e20f0db4911169dc4f3.
- GitHub Issue: #10128 (https://github.com/soldieg/ReBLACK-XBOX/issues/10128).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
