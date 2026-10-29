# sub_000BAC80

- Manifest: lot 108, position 72; address order. Candidate span: 139 bytes (0x000BAC80 to exclusive end 0x000BAD0B).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAAC80; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAA000. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 139 bytes. XBE raw = derived PE = split = REA; span SHA-256 49ca9546141ed963db71d04f83b42291a62962b438821115b947089a196ac302.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 139 bytes.
- Source SHA-256 2b91c0277d827ba441394162295f275647e4a03309992d236ca1ec19bfd1fa28; compiled object SHA-256 eded14900a2183de19f7fd36dcef6624b6e3f0594d7bd4e18ab2d1e1598e68bc; candidate object SHA-256 5d0dcc9db7d67a60529b79d6e5fa52cc5f11b5edb6442d6d86847005df873918.
- GitHub Issue: #10085 (https://github.com/soldieg/ReBLACK-XBOX/issues/10085).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
