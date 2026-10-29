# sub_000BF9F0

- Manifest: lot 109, position 96; address order. Candidate span: 4 bytes (0x000BF9F0 to exclusive end 0x000BF9F4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF9F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAED70. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 b35733185c96652332b43cc73a669a04a8f4c5d487e986c8939e7f20d3f35657.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 812a888ef593716cc1802cabd5556c7e672581f370270a21e9f0ea4904fcee95; compiled object SHA-256 62b818069c59485731fd79e395cb2116edd0c5aa342a75d1879a70229eb65ae6; candidate object SHA-256 dffde4960044f574fa9c4bc516d5c1c5d160f1761afd38bb3722b65df685f32d.
- GitHub Issue: #10192 (https://github.com/soldieg/ReBLACK-XBOX/issues/10192).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
