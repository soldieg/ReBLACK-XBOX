# sub_000F1BA0

- Manifest: lot 114, position 88; address order. Candidate span: 15 bytes (0x000F1BA0 to exclusive end 0x000F1BAF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xE1BA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xE0F20. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 15 bytes. XBE raw = derived PE = split = REA; span SHA-256 38c40c16fd330bbd48ea108e1a854e88f883daad40a4ab89a32a9e233e478e24.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 15 bytes.
- Source SHA-256 ff90380b6c5ccf6b17f8188f3a25ea22fa83441dfaa0c0c6b6a42705160afd9d; compiled object SHA-256 c529ad4be3553cea3db6bf820f209723c4e60b8f6f9f81123392b0265dbb815a; candidate object SHA-256 afbd065cbdcfadd2848767374d81a501417eb83f6a74af08925f7a86d8ca72fc.
- GitHub Issue: #10590 (https://github.com/soldieg/ReBLACK-XBOX/issues/10590).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
