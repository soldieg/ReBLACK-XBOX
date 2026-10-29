# sub_001BD7D0

- Manifest: lot 138, position 31; address order. Candidate span: 1 bytes (0x001BD7D0 to exclusive end 0x001BD7D1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AD7D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1ACB50. REA read_bytes evidence ev_7a18a095c0efe95dc7ccbae27c06043ac095963614a0801709e0acf044e653d5 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 cc9c5c2f5cf0e50bcdf8843bb23ea579ef0f9a965f6b79fa7d257a4192b82535; compiled object SHA-256 e9cbcf8bf97613001a3d8023400f7811a68318a5fcdc89d8d086833fe14aa350; candidate object SHA-256 95288f101486e297746c8caf846981254b7cc543968efaff422e74fb5bd2a127.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
