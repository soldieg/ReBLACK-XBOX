# sub_0013DFB0

- Manifest: lot 121, position 36; address order. Candidate span: 1 bytes (0x0013DFB0 to exclusive end 0x0013DFB1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12DFB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12D330. REA read_bytes evidence ev_adeec418a2da0a13a8f87c88af72963302cdf224c23e5b6eb8ec33ddb0d6d05d returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 516c1307ec6f435e9e8be6b077a79bf322f16eb9d1bf2673b76434bfa4b1dd4d; compiled object SHA-256 ac3d505a3fb51f082ad6e38c523d81302ae3625b1e8907ba722ad6e457a0e97e; candidate object SHA-256 8607ba7e081638114d11f30c037d755c913ed7f10a1f9897e8f63e8b5cd4ed28.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
