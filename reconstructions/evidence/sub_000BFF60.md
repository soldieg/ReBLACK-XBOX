# sub_000BFF60

- Manifest: lot 110, position 12; address order. Candidate span: 10 bytes (0x000BFF60 to exclusive end 0x000BFF6A).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFF60; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAF2E0. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 10 bytes. XBE raw = derived PE = split = REA; span SHA-256 e78bc96fa5851c74015925f38caa53604b01d9a5aef1dd42fd4311274a4f6fb5.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 10 bytes.
- Source SHA-256 9d13b5d0d4b123b456d0bfaaacdcf2f8bd3426b5b725483e3435035eb17513f7; compiled object SHA-256 16b9b4f494883db9d6a0efa466b6cde075e18625f599da4e52a802133c046578; candidate object SHA-256 478e9ce069b3d40998c3913b0f0d66d3a0f49607ff8f622c062a25de0d956d15.
- GitHub Issue: #10204 (https://github.com/soldieg/ReBLACK-XBOX/issues/10204).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
