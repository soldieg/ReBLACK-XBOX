# sub_0007DCC0

- Manifest: lot 104, position 53; address order. Candidate span: 25 bytes (0x0007DCC0 to exclusive end 0x0007DCD9).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x6DCC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x6D040. REA read_bytes evidence ev_41e453980d017062d608a7536b270bd6a72dfc5f3019c1c7f17cbce40ab5a09e returned 25 bytes. XBE raw = derived PE = split = REA; span SHA-256 64a307fdc4a1ed43bdbb04f916016027350ffa388fa3d3fa9187b043af1745b5.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 25 bytes.
- Source SHA-256 d8f7cb4235fad015ffb4aef8b42598f44558e0f663541f7509f441c52678c6d1; compiled object SHA-256 68a7042906ead376ed57173dabe3cf946b5ce0b7cb885c74c67c0429549c9b18; candidate object SHA-256 7638af8e7e152ffebc01f1cbb7e592ec36586bc4c70313dc802ddea42c186068.
- GitHub Issue: #9707 (https://github.com/soldieg/ReBLACK-XBOX/issues/9707).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
