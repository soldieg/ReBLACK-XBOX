# sub_0013DFC0

- Manifest: lot 121, position 37; address order. Candidate span: 1 bytes (0x0013DFC0 to exclusive end 0x0013DFC1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12DFC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12D340. REA read_bytes evidence ev_171b5adb43f84302ee3abff15e540a7a3596e082772f0ae1781b3647be2fe943 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 d280c34fa3293722fd6fa91151dee40a77a9e06c74bd21f3c2d09f6b6612c3f6; compiled object SHA-256 cbf23e171e05d205ab7f2291251ba396dec7ce7c2ea35b08efb294902b3becf3; candidate object SHA-256 d6ed010efd0e72ac2d86a5c7fd5422463fcbcaa67cde047c272e56629dc817db.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
