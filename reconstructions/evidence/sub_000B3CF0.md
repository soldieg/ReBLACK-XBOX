# sub_000B3CF0

- Manifest: lot 107, position 42; address order. Candidate span: 44 bytes (0x000B3CF0 to exclusive end 0x000B3D1C).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xA3CF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xA3070. REA read_bytes evidence ev_9f795c6c7542f557c322958dcddf5bb2e3212efd64f1d57abb9c388a4d3a989d returned 44 bytes. XBE raw = derived PE = split = REA; span SHA-256 a7b939b4f4272275385814dd35c476c4df0fbc63df7a1e98b7e4e5d8e71245f0.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 44 bytes.
- Source SHA-256 dcde36719fb39170486e65842a7bc9471653b5e51599417cb3cf07f2cc77a5e0; compiled object SHA-256 6e204e1e4fb9ed60881c7344b7c25b270240fcd24dfb2ef05e0b6dbfb910d3ff; candidate object SHA-256 7031f1b61c9f22f3b4964118c59a02465543f4f2897d2f74e23dd664a922be7d.
- GitHub Issue: #9962 (https://github.com/soldieg/ReBLACK-XBOX/issues/9962).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
