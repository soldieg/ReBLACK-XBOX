# sub_000F1BB0

- Manifest: lot 114, position 89; address order. Candidate span: 38 bytes (0x000F1BB0 to exclusive end 0x000F1BD6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xE1BB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xE0F30. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 38 bytes. XBE raw = derived PE = split = REA; span SHA-256 029a23c9b57870f315370ca11669d26eedd8efcff590b272e5e81360b8da8837.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 38 bytes.
- Source SHA-256 d550e808a743e8d74d5068e59686ea09e6420e104a3fd52d4bb66724d2f0df6c; compiled object SHA-256 7bda7a724b7bf8b25918f48cd1738de0e170ea8e4229b9a0270c8f9235bbee55; candidate object SHA-256 a8a8c4e1b347baa9ad1494fdc0f118c8c9817466ef2623d6e9233e2157c640a8.
- GitHub Issue: #10591 (https://github.com/soldieg/ReBLACK-XBOX/issues/10591).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
