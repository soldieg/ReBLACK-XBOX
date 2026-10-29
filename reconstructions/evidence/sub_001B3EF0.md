# sub_001B3EF0

- Manifest: lot 134, position 17; address order. Candidate span: 10 bytes (0x001B3EF0 to exclusive end 0x001B3EFA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A3EF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A3270. REA read_bytes evidence ev_a03e4eb365e1fac00243b2fb7ae93bf91ddbd7126e8c9577cd478e57e3d0b7ba returned 10 bytes. XBE raw = derived PE = split = REA; span SHA-256 41d8c83cb530acf6592d48ebaa4c7d17885250e641f10530b2c0597800c2b90c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 10 bytes.
- Source SHA-256 6464d5595433d1eb3188124b47da329ec4389da1a1c0f94c621490f33a279c6f; compiled object SHA-256 0c35a70597d94d88e51273e487dc404cc2e0cf112c3f410e8171b79aa770bca4; candidate object SHA-256 986978c749635c3847d3bbaf4ae15631ce291fa77b0c33495703049c9a10733f.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
