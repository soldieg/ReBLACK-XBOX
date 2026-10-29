# sub_001F2BC0

- Manifest: lot 141, position 87; address order. Candidate span: 1 bytes (0x001F2BC0 to exclusive end 0x001F2BC1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2BC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1F40. REA read_bytes evidence ev_827906c6e3672eebbadbbae3e56a2b8e7eb6072ea5848970a9a7194c129eb134 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 fbdee3261318652f8373b96a84f88b8c43764477d6038950db8b130b682f525d; compiled object SHA-256 1968ef9af2c340b90df8cf9782d6ed7e057df41ae04b158044f98b48fffa5ece; candidate object SHA-256 4b6993b640b176649ce51fb76544e32a70457b256a37a409071008586bc288c8.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
