# sub_0013DEA0

- Manifest: lot 121, position 26; address order. Candidate span: 3 bytes (0x0013DEA0 to exclusive end 0x0013DEA3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12DEA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12D220. REA read_bytes evidence ev_bb30c475c61e48c38a223fe8fb8173fa74db70d06233be1ba4b66b4f92eb2af8 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 4866223aa890a986b9421c1ce482b34cf710d32b6ef83bc9addc91659beedb6a; compiled object SHA-256 b5d11d01351bbd09d7ca2ae2819cc82c75e398c5b95723e44bd56d1a2ce24ffe; candidate object SHA-256 ea23dd0a0d5269ba7637d0267e24e7c8bd3fef5774cece75f7354a008eeeadbe.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
