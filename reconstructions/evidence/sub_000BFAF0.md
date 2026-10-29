# sub_000BFAF0

- Manifest: lot 110, position 2; address order. Candidate span: 14 bytes (0x000BFAF0 to exclusive end 0x000BFAFE).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFAF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAEE70. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 14 bytes. XBE raw = derived PE = split = REA; span SHA-256 a97b32a4c3d8e68d22c28ca5fd7a9b9eee0b9f0119ea63165e7638ba4f488985.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 14 bytes.
- Source SHA-256 8e7745f3b56033764228e936399bef3ce7aa54c6758717e37453a81f9a3f5cad; compiled object SHA-256 a3ff4e00de5b587ab11e755c1144a7279aae2118b6720d0d93c4c2ddbf8d1ab1; candidate object SHA-256 d9086e140ba9e2da9709a951bafeebd7762aa22d6908e01e241f0a2cd06ff85c.
- GitHub Issue: #10198 (https://github.com/soldieg/ReBLACK-XBOX/issues/10198).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
