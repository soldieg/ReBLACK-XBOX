# sub_001BD7A0

- Manifest: lot 138, position 29; address order. Candidate span: 1 bytes (0x001BD7A0 to exclusive end 0x001BD7A1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AD7A0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1ACB20. REA read_bytes evidence ev_a5df615953e5c9c90ed3cc84f0c8aa2dd756f1049c087eeb4fe1411f33a1265a returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 90eee5f3e55519afe6c3409445f406282ccef511589519cc9c83fe074b1f871e; compiled object SHA-256 21de261d66475afb515a2a3ac2b8a6fd52711d923f45b323a797b2fea9186f22; candidate object SHA-256 d437705bdbd18de13fb3526ac45f7f20b019551214e71c95b6d20dd06d6df313.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
