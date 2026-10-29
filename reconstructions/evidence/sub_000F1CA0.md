# sub_000F1CA0

- Manifest: lot 114, position 92; address order. Candidate span: 71 bytes (0x000F1CA0 to exclusive end 0x000F1CE7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xE1CA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xE1020. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 71 bytes. XBE raw = derived PE = split = REA; span SHA-256 2f7f2bc330457c877e4382cb971fcd5b226004b160e5bccd9393d9e558678dd4.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 71 bytes.
- Source SHA-256 9a661560e3eef08e9e9003a53d169d952ea1ab5f2058adcaf9ad60e3ea6d987b; compiled object SHA-256 70dc67bc97ef4e5901866b49c5c5e64625868154b952d2e14b3052ec5026c742; candidate object SHA-256 a938862dc2c9bd44d2f6e6966cf90ac1a928b57e2ebe14ab559ca42b64df3002.
- GitHub Issue: #10595 (https://github.com/soldieg/ReBLACK-XBOX/issues/10595).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
