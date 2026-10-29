# sub_000E9DF0

- Manifest: lot 114, position 72; address order. Candidate span: 186 bytes (0x000E9DF0 to exclusive end 0x000E9EAA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD9DF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD9170. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 186 bytes. XBE raw = derived PE = split = REA; span SHA-256 725c46e47281ca1e199465df8aff9a7679d9a5c1551a658a0fac31459d22b318.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 186 bytes.
- Source SHA-256 37b3b6c1d1fdfc852af853fb08b18c0db8c8c4039b61ac59d4d59d60194ed16e; compiled object SHA-256 9b3076dc40a3cc7e8ee03433326c2a30f60ec150b1a3fc59b7645dbd0fbc2f56; candidate object SHA-256 2e5150dc1c8345e82d3c1d90d2d1af42c596da0db08798cbd2c39c640a33f902.
- GitHub Issue: #10575 (https://github.com/soldieg/ReBLACK-XBOX/issues/10575).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
