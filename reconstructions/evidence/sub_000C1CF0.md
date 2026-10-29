# sub_000C1CF0

- Manifest: lot 111, position 9; address order. Candidate span: 18 bytes (0x000C1CF0 to exclusive end 0x000C1D02).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB1CF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB1070. REA read_bytes evidence ev_1170f83c433f4613954d883277e925781c638dfc0a34bea8c82e4d4ebc1890a7 returned 18 bytes. XBE raw = derived PE = split = REA; span SHA-256 e4ca6b7a83a2cb0096b898f4a964aa0bb2dddcdf0ed9a1ab42f3f6b0e434ef4d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 18 bytes.
- Source SHA-256 a7909765d2964b313178b1b859417f6377001a8702db2bb8be7f19f5a4f9a140; compiled object SHA-256 4255d313eea023c6932eb454b4eae9f4f43b37915f0251300fad9dc555d8cc79; candidate object SHA-256 31fd1bb201a474231de7e435b94fa86a438df6174404c88f639af227c0666915.
- GitHub Issue: #10273 (https://github.com/soldieg/ReBLACK-XBOX/issues/10273).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
