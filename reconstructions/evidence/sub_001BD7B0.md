# sub_001BD7B0

- Manifest: lot 138, position 30; address order. Candidate span: 17 bytes (0x001BD7B0 to exclusive end 0x001BD7C1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AD7B0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1ACB30. REA read_bytes evidence ev_f8a0ec33bee0b3ae5e67209a4198290163217973efbb511f25c0871cdc843cd4 returned 17 bytes. XBE raw = derived PE = split = REA; span SHA-256 339bafe557d1da4e4423f8862afb88297382030ee8627906cf76bd88b8f17044.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 17 bytes.
- Source SHA-256 b3fef2d07488406d1ce316b38baf6734c304aa85135eba9626f03cd61cadf789; compiled object SHA-256 f4450963d3092efbda122c7eddbf96d09ecae90bd85018ae0bd0861f90a42786; candidate object SHA-256 dd4e0e311a7791516e9b73f293773d190a130f3d6f79599790332c964faa1cc4.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
