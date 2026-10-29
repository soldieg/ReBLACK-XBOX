# sub_001C1CF0

- Manifest: lot 138, position 70; address order. Candidate span: 32 bytes (0x001C1CF0 to exclusive end 0x001C1D10).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1B1CF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1B1070. REA read_bytes evidence ev_bc575ae8a23105b46f4116d68e59e5a0ae3f0879ec2d100c6b88a6e5863bd145 returned 32 bytes. XBE raw = derived PE = split = REA; span SHA-256 6e3489d9b53b1c4d4274b20ab20320f452931ebda0065cbc40ac9eb1e3e10109.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 32 bytes.
- Source SHA-256 4fe0cf1c837bfcf4ab80e469c1007119014fe8c0fb92bce9f66df3a4c7b76f3b; compiled object SHA-256 f492fe9dced4d09adba9b300feecb99bb5ae1bd3d6704aaac887cc82e080e2cf; candidate object SHA-256 19c2fe56cb958b0897f535d0263bc3d5a550737e4ec3f51a5503a37f84ea3690.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
