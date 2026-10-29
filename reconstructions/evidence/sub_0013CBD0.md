# sub_0013CBD0

- Manifest: lot 120, position 63; address order. Candidate span: 1 bytes (0x0013CBD0 to exclusive end 0x0013CBD1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12CBD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12BF50. REA read_bytes evidence ev_07494aec6eac1ae10476ab7f357d54cf3c64c5af001143442762764ccdda6c01 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 964d191ae51c57735382501742dc035d9072279a0995349008a51a848da4cc8b; compiled object SHA-256 7b767f267615079e2c9b81fcac57f7880a082f528fb9ff3741339a1a5f4ca444; candidate object SHA-256 1f787482dba347f0e6dab7fb1db7843fc2705da344bca5ffd8929773eacb509c.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
