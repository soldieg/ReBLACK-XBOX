# sub_001B4EA0

- Manifest: lot 134, position 83; address order. Candidate span: 1 bytes (0x001B4EA0 to exclusive end 0x001B4EA1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A4EA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A4220. REA read_bytes evidence ev_5b617991f6712ec0be17181b1c69e085743755c1b6b8461e320387988f0588d3 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 3190846187c008ac1a4738dd910f952abe1490856f45c31fb773be1d49ea8928; compiled object SHA-256 ac9ff3d0e389cbea30d37e4300ca3c7ee7b5e42714030fd9b303bdb17a076425; candidate object SHA-256 597f3a2b5a408d796369808d0a3aa897dffa6903d35fd22e11595a8d89ca139a.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
