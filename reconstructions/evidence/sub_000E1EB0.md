# sub_000E1EB0

- Manifest: lot 113, position 15; address order. Candidate span: 9 bytes (0x000E1EB0 to exclusive end 0x000E1EB9).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD1EB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD1230. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 9 bytes. XBE raw = derived PE = split = REA; span SHA-256 336b12cad8156c995a9688f8a1156f17d3a8c139ee5a5cfb2ea96476a9f0e077.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 9 bytes.
- Source SHA-256 5b9ea55f0bca41f0260b155b30698af4d086c217f7bae84934fdb449e0910f0c; compiled object SHA-256 d3125ce95a7bbd71cb215d6f0fc9fd4c7bc294d23e3f7d1257e92ab91f9050fb; candidate object SHA-256 88981a230e3be375ec99d156ffbd6477193fb7eed0ff5dc5855351830feb4ea9.
- GitHub Issue: #10427 (https://github.com/soldieg/ReBLACK-XBOX/issues/10427).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
