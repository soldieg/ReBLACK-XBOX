# sub_000BFB00

- Manifest: lot 110, position 3; address order. Candidate span: 14 bytes (0x000BFB00 to exclusive end 0x000BFB0E).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFB00; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAEE80. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 14 bytes. XBE raw = derived PE = split = REA; span SHA-256 e8e7fd984ca4ef3fdfa99d582ea8a2e9e507de2d0ca0846d24df55f27756da01.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 14 bytes.
- Source SHA-256 957329c40fd52a07f1fdfa9c8f81c3441119c72a4dd0401a3f8e4f64dde877a0; compiled object SHA-256 860820577b5490fd8f2fcac5c352f3b57ac23c57e0a05152c4cccb4cfaab2d78; candidate object SHA-256 65437817090a1f2940672ea2ffbd75bcbb8a5b3bf38c2bf27a6f7a038190160f.
- GitHub Issue: #10199 (https://github.com/soldieg/ReBLACK-XBOX/issues/10199).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
