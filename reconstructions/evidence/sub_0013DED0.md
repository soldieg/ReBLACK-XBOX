# sub_0013DED0

- Manifest: lot 121, position 29; address order. Candidate span: 1 bytes (0x0013DED0 to exclusive end 0x0013DED1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12DED0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12D250. REA read_bytes evidence ev_a350bf9bdb540fe67a3367a3bdc05de97e66b0ec9436fb84c9b454ebfd04e75d returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 fadb0f4eb0e264462cfa4c4c3740226f6a6aae1335342ecd2c70242e3c975587; compiled object SHA-256 1be9d781053d084c8bc53407619d565a5a59f3afa1ed20f4959dc9761b620b7d; candidate object SHA-256 6ae48ec84889adca61433c965cfb1fc7ea603df710924d0e85ec9921219b5595.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
