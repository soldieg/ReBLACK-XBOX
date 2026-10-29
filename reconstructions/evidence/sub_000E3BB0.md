# sub_000E3BB0

- Manifest: lot 113, position 90; address order. Candidate span: 30 bytes (0x000E3BB0 to exclusive end 0x000E3BCE).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD3BB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD2F30. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 30 bytes. XBE raw = derived PE = split = REA; span SHA-256 d56c21f1f8e4efd4a7e8aa4d0ecaf120078c3d4e85da330bf44f23a480d00eed.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 30 bytes.
- Source SHA-256 46f3659b030d4f5c174ecc55a906c4937b3c7707572ffafd8ee11809e00a8912; compiled object SHA-256 a4bdb553e60df18fdd52c8f91d4c7da3349da7b36477d61e75dacb1578e8f0b9; candidate object SHA-256 6b7fa11901b8e4f67c681c9902349e37798074a13036c4b124f322bb6186c419.
- GitHub Issue: #10502 (https://github.com/soldieg/ReBLACK-XBOX/issues/10502).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
