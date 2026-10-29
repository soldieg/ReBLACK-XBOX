# sub_001E7BE0

- Manifest: lot 140, position 7; address order. Candidate span: 1 bytes (0x001E7BE0 to exclusive end 0x001E7BE1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1D7BE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1D6F60. REA read_bytes evidence ev_efb4a83ac4806ef12094f31109af6de0a46a68c774f92b060e53ac0c032e18a2 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 af488642ce8f4da656300027a40ce7d38842376d017ac34324c98260a3e5d4ec; compiled object SHA-256 da8bf692c7aa4240aa43a0a4eff10a40c0ee00195127d390b1e9ca69b08a43b6; candidate object SHA-256 479a69303116d3befeb7eb3c606a1353dcf62591948456e6f54ebce8b7478443.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
