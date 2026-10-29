# sub_000C1D8C

- Manifest: lot 111, position 13; address order. Candidate span: 4 bytes (0x000C1D8C to exclusive end 0x000C1D90).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB1D8C; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB110C. REA read_bytes evidence ev_1170f83c433f4613954d883277e925781c638dfc0a34bea8c82e4d4ebc1890a7 returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 8843b54d2df63ca265cf4a05d27dd2b29a74fb476d296dd44a0e171d74b441ca.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 d9aaf67c3f5b926d8501825377c60dc57b2010fd4f809fd2ea4cf28ff5821205; compiled object SHA-256 f740ca17fed03fff4572c9d7e4407ec28eb28c40c0ddbafcc721a0edfa0b99a3; candidate object SHA-256 afc14c65ed8ccd1662fe3011cc9f7f01ad4072cf0114229a527f77c576b2b0ce.
- GitHub Issue: #10275 (https://github.com/soldieg/ReBLACK-XBOX/issues/10275).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
