# sub_0010EAB0

- Manifest: lot 116, position 32; address order. Candidate span: 369 bytes (0x0010EAB0 to exclusive end 0x0010EC21).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xFEAB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xFDE30. REA read_bytes evidence ev_a4eda12415ae39aa38552000079e86603009b91dd480b148823d7785fd8683c5 returned 369 bytes. XBE raw = derived PE = split = REA; span SHA-256 5a68e98130a5c54e04f218eb1c73ff4cddfbcb71faecbad146fb99daf435b9ce.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 369 bytes.
- Source SHA-256 614e2bab509bd3979106aa1313c2ec095a0e863c0fe0e010d0a9a5bc06350b0d; compiled object SHA-256 f633e37dc04957517462db22564d649c18b38ceeaf0bffd80df4a55ba42a05a3; candidate object SHA-256 8acfebffe3a215d776cf4c2461cf46ad5cc3d5dce3b8af83dca9578ea0321040.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
