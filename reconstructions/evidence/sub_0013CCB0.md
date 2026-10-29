# sub_0013CCB0

- Manifest: lot 120, position 70; address order. Candidate span: 1 bytes (0x0013CCB0 to exclusive end 0x0013CCB1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12CCB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12C030. REA read_bytes evidence ev_bbc8581d71c1b59e521420906ac76a8aac1da78c77deacda9350ff24f7202f66 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 0e8337c6b408863692d379fbcc3a9ab7340213c59c6d2a3517365d5bf346306b; compiled object SHA-256 3c9d8123d6e721d56f87c61ec658279ede3bd874a5e0a1e873d310f4f63b3b92; candidate object SHA-256 d7b19e0ade0581f63699a0c9bef4bd6049ee77ccdfb6089cb1e9698811f4dada.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
