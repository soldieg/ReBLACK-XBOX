# sub_000E1EC0

- Manifest: lot 113, position 16; address order. Candidate span: 11 bytes (0x000E1EC0 to exclusive end 0x000E1ECB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD1EC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD1240. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 11 bytes. XBE raw = derived PE = split = REA; span SHA-256 7a40909c858e6f24d1844a010a89223890f83252ca5587ccd1c04aa937e4d9f9.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 11 bytes.
- Source SHA-256 5c5563a3b4132677e8477eb14562c74d8adf5df735b78def25d91c0a38916169; compiled object SHA-256 3fb4cba7878fcd9c99f892ae8e4b236e7b2365452e38c23e82f166f87555a59d; candidate object SHA-256 bda17bab4cef44c9279704c0684ba80a03e9b4a1264ff131b08c8742df36303c.
- GitHub Issue: #10429 (https://github.com/soldieg/ReBLACK-XBOX/issues/10429).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
