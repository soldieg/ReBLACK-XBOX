# sub_0011DCF0

- Manifest: lot 118, position 32; address order. Candidate span: 164 bytes (0x0011DCF0 to exclusive end 0x0011DD94).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x10DCF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x10D070. REA read_bytes evidence ev_b1491fb38b4988feaf117471d6ad2077397063073a12e32c40c2a6bb1066c32a returned 164 bytes. XBE raw = derived PE = split = REA; span SHA-256 d2a3b7f3e11b4232eabfda8a56892cd7c7eaf99dd4fe630aa2f7f8612099fac1.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 164 bytes.
- Source SHA-256 f865beed4b41f99fbc7ecada1f1cdbd41d5751a633465584c888e85b94cb7051; compiled object SHA-256 228d861159ce3313b27b39206fa8f3ecc9f3c43f9b1a0f0e1a92dbf97fc9197c; candidate object SHA-256 61c6b3bd9217c4ec1a45edb11dd88ed5d2939811fa71732574f8d87b9d5d677a.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
