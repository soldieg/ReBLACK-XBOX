# sub_001B3ED0

- Manifest: lot 134, position 15; address order. Candidate span: 1 bytes (0x001B3ED0 to exclusive end 0x001B3ED1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A3ED0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A3250. REA read_bytes evidence ev_bc53e4e9035cbd19b1f26231a3e147d3cd3a2c1a5753b4f577d655f96a98194b returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 d434dd3a12e785c7d5639bc65894c2ef23a999d257949e79b5c307681789f0b5; compiled object SHA-256 4496b209f74d0bdf26fdf6e1abf7a9933586cb9303353907d60402ace0027740; candidate object SHA-256 5e694699494c0a8773c9e8daddad556eb933093015517c1b16edeb18fbd4faa0.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
