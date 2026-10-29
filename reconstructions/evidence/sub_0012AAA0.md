# sub_0012AAA0

- Manifest: lot 119, position 67; address order. Candidate span: 1 bytes (0x0012AAA0 to exclusive end 0x0012AAA1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x11AAA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x119E20. REA read_bytes evidence ev_562832389ab7f23d4bd15e45cdaa2b336fe33326b8a4a7b7e237a1906c350c84 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 ca21b0b55d20043659a31163e313c92c62fca9008275ca39836bf77cfeccaa95; compiled object SHA-256 369071fd8d7f0a9be117a096f16962daf94c5e2993e269bd10bcda23d651b846; candidate object SHA-256 8bec669117f6970883c1b74c34ad2dc6182535cdf223e8b6996b479b4bd816f1.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
