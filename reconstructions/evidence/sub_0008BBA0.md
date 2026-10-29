# sub_0008BBA0

- Manifest: lot 104, position 90; address order. Candidate span: 24 bytes (0x0008BBA0 to exclusive end 0x0008BBB8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x7BBA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x7AF20. REA read_bytes evidence ev_41e453980d017062d608a7536b270bd6a72dfc5f3019c1c7f17cbce40ab5a09e returned 24 bytes. XBE raw = derived PE = split = REA; span SHA-256 d20aa78885b82eaf606199a82b9b851e2dfad800b1f3b4dc6385cc01b8ed906f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 24 bytes.
- Source SHA-256 aadae8fae2d6560466ab3aa9429be1d4b351a6935e6e15b058fb738a6f931e88; compiled object SHA-256 e43f67d9162482ccf54b9137502094672442c1eb849174af2ffbb6ada50595fa; candidate object SHA-256 e5903eaee09ee1fb7590b95eb7e3d01bcf82740b89ad0ed09926a3e5caa8e8a1.
- GitHub Issue: #9736 (https://github.com/soldieg/ReBLACK-XBOX/issues/9736).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
