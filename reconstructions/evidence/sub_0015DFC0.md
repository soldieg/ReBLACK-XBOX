# sub_0015DFC0

- Manifest: lot 124, position 74; address order. Candidate span: 1 bytes (0x0015DFC0 to exclusive end 0x0015DFC1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x14DFC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x14D340. REA read_bytes evidence ev_66bc3db1d7aad0fb9f3e12a49a12f8c73cea0a90777a3f843a256d4d3e14e7a5 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 d535c1519cd24f0cefef2e195418482baf4aba86494ccd1fae726437aafa212f; compiled object SHA-256 8bdae269747e90935d983b5b86ba97b1ceaa387e9e66ac4cba73860dbba81ff8; candidate object SHA-256 26a160eb1cb6bd5938f0abed9c8092602fe9f865f4250261e1aeb077196f8f48.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
