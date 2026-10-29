# sub_0013CDB0

- Manifest: lot 120, position 71; address order. Candidate span: 1 bytes (0x0013CDB0 to exclusive end 0x0013CDB1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12CDB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12C130. REA read_bytes evidence ev_bb66364e031a1b17e7a5208f167506fbe219551e11bdcb9d7429b819cd4521b5 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 da35fd7394598c7190fbb1f7d42e2aae7e74e8cd4d901c500c3ed3b089eabf35; compiled object SHA-256 f20c19cf9b26ee7f6761f60eef37ab8980e8994cc999e047af670f7b9e0715b5; candidate object SHA-256 e7299ddddcd685d059a33f02ba6a99077c2518ff68946da538970de376d5b6ef.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
