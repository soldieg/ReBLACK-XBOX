# sub_000A3E2F

- Manifest: lot 106, position 14; address order. Candidate span: 153 bytes (0x000A3E2F to exclusive end 0x000A3EC8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x93E2F; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x931AF. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 153 bytes. XBE raw = derived PE = split = REA; span SHA-256 b4fc925adfdff52d968db68b032e1f09f765af81aa52305e0344ff5a368b6126.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 153 bytes.
- Source SHA-256 d11174c774683f9475be7883ee875c1003847b837a34f7cfc56a4781c7961a2e; compiled object SHA-256 93569eb7054c7422d194b1a3a1b62c7337d5510c70b58ed0ebf190be05d7e218; candidate object SHA-256 0bc2b13cd8b2a5894070142100d704b093bdf85dea4cb992a1678fa7ac24bd59.
- GitHub Issue: #9848 (https://github.com/soldieg/ReBLACK-XBOX/issues/9848).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
