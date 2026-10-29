# sub_001B5BF0

- Manifest: lot 135, position 60; address order. Candidate span: 55 bytes (0x001B5BF0 to exclusive end 0x001B5C27).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A5BF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A4F70. REA read_bytes evidence ev_ddaf3bdd897ccf0c186348d0076a5a487b6ade5a75e3e7595cecad1dce3336fd returned 55 bytes. XBE raw = derived PE = split = REA; span SHA-256 6b4d39bf19708d718ff226e29f67878dd4e3ab90bb620fed4831baca1bcfac9d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 55 bytes.
- Source SHA-256 256c9fde01bd2cf62f9c2ea4c0937dfd5d0ae5b602c2b35015fb6ccd04879a3d; compiled object SHA-256 016795b4e84b4cbb922c626ebd2943da1051ba21ad52d4c342ea669c1dba8e04; candidate object SHA-256 79ef738c5b1c73246658a0c6004943eca49db110a6ffc3d4036fd69f11bcede7.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
