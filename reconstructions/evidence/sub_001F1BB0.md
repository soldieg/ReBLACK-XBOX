# sub_001F1BB0

- Manifest: lot 140, position 67; address order. Candidate span: 3 bytes (0x001F1BB0 to exclusive end 0x001F1BB3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E1BB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E0F30. REA read_bytes evidence ev_10c0ab12d1abd86a7c98d522091b7186441b1ebf788c42ef84a795ec9ce72b4c returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 4bc724f3b1d0caf4fe369c18cba3102e6c4ea057f63fe1587e3973134a7f755e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 e363c5e81c5390938740c8fc39ce43697cd616a3345b0e076f7a7a0374a7f302; compiled object SHA-256 5862523b87a74b296a17e62e611cd9d7c8ae91bb4c99c80e24dd88c1d5ea267c; candidate object SHA-256 7b49c6f65406e0a63595b3acd75b5e17b3a17d8841f21b2dd39c2026b8709434.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
