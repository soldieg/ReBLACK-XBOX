# sub_000DB6B0

- Manifest: lot 112, position 76; address order. Candidate span: 1 bytes (0x000DB6B0 to exclusive end 0x000DB6B1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xCB6B0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xCAA30. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 79217af09c1f42932984eed0e4446ce378ffedd22b095856ffd5957b0bf677b6; compiled object SHA-256 f12c7b743b8f9a580dbbe72e528407dab4cb7f9bc0d0877fd954e07daf1655ae; candidate object SHA-256 3db3f1214f070a6536c2eddc78a72d3bcba521d070fd25a8f7fa4da2ec9e4a61.
- GitHub Issue: #10397 (https://github.com/soldieg/ReBLACK-XBOX/issues/10397).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
