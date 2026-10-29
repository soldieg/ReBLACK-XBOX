# sub_000E8CC0

- Manifest: lot 114, position 57; address order. Candidate span: 192 bytes (0x000E8CC0 to exclusive end 0x000E8D80).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD8CC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD8040. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 192 bytes. XBE raw = derived PE = split = REA; span SHA-256 e4e8d1db760dc1bf69b8c6b5ac6f14b648189f6b84271d6941dea3e39c1f9991.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 192 bytes.
- Source SHA-256 733b8fe638ab3273e9964ac92068613d5b410e59a4e4f320e93ad3c3f8e3630b; compiled object SHA-256 97550bebba798f4b4f26b323c5350eab9a0edffcef2919dd37fd222ad0f32077; candidate object SHA-256 0314c17806f4924443d1aeccae01014c4b1f0dfc747e35eca2b924fb13590c6c.
- GitHub Issue: #10561 (https://github.com/soldieg/ReBLACK-XBOX/issues/10561).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
