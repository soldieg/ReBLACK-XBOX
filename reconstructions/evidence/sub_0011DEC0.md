# sub_0011DEC0

- Manifest: lot 118, position 34; address order. Candidate span: 592 bytes (0x0011DEC0 to exclusive end 0x0011E110).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x10DEC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x10D240. REA read_bytes evidence ev_910f9e0f2ec0a3956341138db539a190adb37dcf10ab0a520e186b5f446cf9a2 returned 592 bytes. XBE raw = derived PE = split = REA; span SHA-256 98e6ba3e9822a493f723e25fb65575654babdc4423354c3b3fa834fe1e821890.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 592 bytes.
- Source SHA-256 4c41674c9c9fc82c5eef3166fa3bb0182e520f746d8be7510bbd38165f4cc5f6; compiled object SHA-256 0ad477c8ff0c5caa312007993a7a64014716042764636ff555217b1fa1c7ca34; candidate object SHA-256 220404c000c174080d91107ead6a1405ee07d9da836f27375f6a38308250fe49.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
