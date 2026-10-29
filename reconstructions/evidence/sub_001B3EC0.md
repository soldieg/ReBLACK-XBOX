# sub_001B3EC0

- Manifest: lot 134, position 14; address order. Candidate span: 4 bytes (0x001B3EC0 to exclusive end 0x001B3EC4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A3EC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A3240. REA read_bytes evidence ev_4358322f6635fb74e204f153aac77207f753b63f441ddf93091c3f32f571542f returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 2d8fbdac916cdaf309703c9e4d4ed6dce8a3a85c47e3a686e6190fa16cffe864.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 382e8b8c08d2b6fe0f25f905d0715c0e3d9381e4560eb03f0564f6943a7cc64d; compiled object SHA-256 2bdbdc92812e9bc648622d9cefea1195a39ba209ea1058f9e9004cba1b53bb25; candidate object SHA-256 3d792e8b0d1a01b96b3c1f68f2d629f27afba844c7601890d397eb86b69dc8eb.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
