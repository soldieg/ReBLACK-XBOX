# sub_0012ABF0

- Manifest: lot 119, position 80; address order. Candidate span: 1 bytes (0x0012ABF0 to exclusive end 0x0012ABF1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x11ABF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x119F70. REA read_bytes evidence ev_af510929eddf016602031457567a6dd66382831d6302088541898916ab4fe337 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 9c187a26e18c8d263c5e4113198c1966bc6d7d66d170444f57844c142c9f76bd; compiled object SHA-256 d3009db4d044c31d2916e12c67932bfdd26398c94407cc125173ff01396ac4d7; candidate object SHA-256 aaec7bcf2b8f416c4a8cbfa4524866bc3fd4928f76ad0f7441af4695e09e8fd5.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
