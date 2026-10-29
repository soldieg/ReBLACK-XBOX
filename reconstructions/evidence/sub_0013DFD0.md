# sub_0013DFD0

- Manifest: lot 121, position 38; address order. Candidate span: 27 bytes (0x0013DFD0 to exclusive end 0x0013DFEB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12DFD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12D350. REA read_bytes evidence ev_0305737a5e9fd54e273cff45e5f62540fe74c53a5290fce9b781ae2b7ebeaa9a returned 27 bytes. XBE raw = derived PE = split = REA; span SHA-256 f9f3650d101bfdccafa6c8a30e520ddd23bba1df1efdc505984d4315c0e8d165.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 27 bytes.
- Source SHA-256 eb3d28b11912f4eec116c0d3b10f23a9922d8eec93a4f5a2d9a7f4a380c62d61; compiled object SHA-256 4da93ba6edc2ff24897212533c3fa43cb31c12f27ecf0d73abadb2c6ba9b4afb; candidate object SHA-256 d7f357f19cf59e8b1e61c1e68727394bc3b427229fc71a5362945b3b46435f80.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
