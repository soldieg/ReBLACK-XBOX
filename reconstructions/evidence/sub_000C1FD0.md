# sub_000C1FD0

- Manifest: lot 111, position 23; address order. Candidate span: 12 bytes (0x000C1FD0 to exclusive end 0x000C1FDC).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB1FD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB1350. REA read_bytes evidence ev_1170f83c433f4613954d883277e925781c638dfc0a34bea8c82e4d4ebc1890a7 returned 12 bytes. XBE raw = derived PE = split = REA; span SHA-256 7186a26f2365fa444ae017386d121dd5f96fbf933027e74474606423a8cf5263.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 12 bytes.
- Source SHA-256 9af6be476c3bc823efbfdf963f5cc4ec93779d3497fcfe0558c3abee27037e6d; compiled object SHA-256 977a4b2c48069ee00e58cf6939f89294f07c58b7e7ff2ec5df2adb72208c41c1; candidate object SHA-256 4101eea72125c5e1f2c7586d31f164c876fbfdfac220072a7a78275306833ab3.
- GitHub Issue: #10282 (https://github.com/soldieg/ReBLACK-XBOX/issues/10282).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
