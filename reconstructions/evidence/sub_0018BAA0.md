# sub_0018BAA0

- Manifest: Lot 132, position 21; selected in ascending address order for Lot 105. Candidate span: 110 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x0018BAA0; body bytes 107, ranges 0018baa0-0018baac;0018bab0-0018bb0d. Direct incoming call-reference export: 1 reference(s), caller(s): 0018cc3a@0018cbc0. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x17BAA0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0x17AE20. XBE raw = derived PE = XboxRecomp split for the full 110-byte span; SHA-256 4c0b0b6487a3e308d264b81f53a63253310e458af9870ea6d4df2acb3a84314b. REA read_bytes evidence ev_cf9a03e8f84dbc76ddd798262c389c0ac5899d4f1c3f4009f0d56d1d91f11ae4 returned 110 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 110 bytes.
- Source SHA-256 9f7bd3d6f83247cd006b1bfc3a00bbb807c61bd8fc962083c6a6e7d28e065d24; fresh object SHA-256 a033a25dae37c0c87d30beaf8acc526ca1becaf9c2d777755eee39a29b24833a; candidate object SHA-256 c09a3b7aa27e076f227de77d0bf2f2e697380fe19a8a3c5274853c5261eb537b.
- GitHub Issue: #9218 (https://github.com/soldieg/ReBLACK-XBOX/issues/9218).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.

## Lot 132 manifest candidate evidence (2026-10-29)

- Manifest: lot 132, position 21; address order. Candidate span: 110 bytes (0x0018BAA0 to exclusive end 0x0018BB0E).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 0018cc3a@0018cbc0. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x17BAA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x17AE20. REA read_bytes evidence ev_3257e8ca06779d8e7712dd1d289ba3f75c0e9c7f9a43e197c71e800f4cb06b2c returned 110 bytes. XBE raw = derived PE = split = REA; span SHA-256 4c0b0b6487a3e308d264b81f53a63253310e458af9870ea6d4df2acb3a84314b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 110 bytes.
- Source SHA-256 9f7bd3d6f83247cd006b1bfc3a00bbb807c61bd8fc962083c6a6e7d28e065d24; compiled object SHA-256 93f09513bb77ea9e8ab09adbdba05a320a41e26c980c9357d6cab3bd96586434; candidate object SHA-256 c09a3b7aa27e076f227de77d0bf2f2e697380fe19a8a3c5274853c5261eb537b.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
