# sub_0008BBC0

- Manifest: lot 104, position 91; address order. Candidate span: 25 bytes (0x0008BBC0 to exclusive end 0x0008BBD9).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x7BBC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x7AF40. REA read_bytes evidence ev_41e453980d017062d608a7536b270bd6a72dfc5f3019c1c7f17cbce40ab5a09e returned 25 bytes. XBE raw = derived PE = split = REA; span SHA-256 98f1ec6013acf49c2a9cd27d0dcf021e88bdf3bbe6c5b0f5f14b90a0b96c2522.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 25 bytes.
- Source SHA-256 25fbcb6e672e019e713ba95cde6fc48189deffb16c33d815523b05608e0c30ae; compiled object SHA-256 13f354ca9c6b33e49d75f455d54ffcad633f59e169e689f3c02045973c30cd45; candidate object SHA-256 2fd19e5c06374dd0f611747d767ecfb1c382632425572f4d7b81fd554cb692d2.
- GitHub Issue: #9738 (https://github.com/soldieg/ReBLACK-XBOX/issues/9738).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
