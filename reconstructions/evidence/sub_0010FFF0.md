# sub_0010FFF0

- Manifest: lot 116, position 38; address order. Candidate span: 16 bytes (0x0010FFF0 to exclusive end 0x00110000).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xFFFF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xFF370. REA read_bytes evidence ev_cb0d5132ff7b37536860be3e3bfc9ee7a5839ba42979b31fd9b4e809bb8bd07e returned 16 bytes. XBE raw = derived PE = split = REA; span SHA-256 007958b3055dbcc8b7dadc04bdba104961691127a01362809db07e19ee0da34f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 16 bytes.
- Source SHA-256 de38f9741165bf93e4af7d1f3e0ca4a6cedc07365685cc020bf60ebcc5402332; compiled object SHA-256 bfe5d1d708f230fb92f267af6ef1df8778dbfdd40a9c6677aa249ee56b0cac1a; candidate object SHA-256 2f31afe06e35e80ac70d289b2b3d0315f6b796109748a658b62ab375f105e927.
- GitHub Issue: #9049 (https://github.com/soldieg/ReBLACK-XBOX/issues/9049).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
