# sub_0013CBF0

- Manifest: lot 120, position 65; address order. Candidate span: 1 bytes (0x0013CBF0 to exclusive end 0x0013CBF1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12CBF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12BF70. REA read_bytes evidence ev_0b347d83d4e2ae6329e8e195be2a054f964c9afe1953cee13ff6158809f75e2d returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 ccf9256f8a913707c4f55d0d3e05a07effef730460e244ba734f4fab61fe5c13; compiled object SHA-256 3027d518c5f8c10539f1f7e5a904661827b83150bbed990f460b722b31487752; candidate object SHA-256 328287a3b318011d4ee9790465dba730ae53f18fe0a0d41282be2bb8cc31f73c.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
