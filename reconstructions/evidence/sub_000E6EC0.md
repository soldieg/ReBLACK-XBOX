# sub_000E6EC0

- Manifest: lot 114, position 40; address order. Candidate span: 23 bytes (0x000E6EC0 to exclusive end 0x000E6ED7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD6EC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD6240. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 23 bytes. XBE raw = derived PE = split = REA; span SHA-256 36dc4a2cfeb7de50388c3afcc9db6d257a72004c52905ffff594e3bfda3bd400.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 23 bytes.
- Source SHA-256 a0d7762cedb1b0958cb7515cf21c3574b31aa09ae71df42af3d0a8a2ee8cc430; compiled object SHA-256 59bd4cac605b463f1b55f03e87b0bf23c9bf4b485da9ef1562a209e1f28885c9; candidate object SHA-256 1c9af5474e39417121d9bf54f31019bd2302e5371ffde0769d5fd958ee455d01.
- GitHub Issue: #10545 (https://github.com/soldieg/ReBLACK-XBOX/issues/10545).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
