# sub_000C0EF0

- Manifest: lot 110, position 64; address order. Candidate span: 5 bytes (0x000C0EF0 to exclusive end 0x000C0EF5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB0EF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB0270. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 5 bytes. XBE raw = derived PE = split = REA; span SHA-256 83783c10b9f6e7fec787dcddcfc25213507c520155fcbecaf414c2d1da2b080c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 5 bytes.
- Source SHA-256 022871f569dce49ec3273bc66f0160e258cafa0b89c8c3695c00e9cf86183326; compiled object SHA-256 565c57494c5050c19d5e0b5d85a0f17e49ef608c6195004a519c373b340c1bec; candidate object SHA-256 110afbcae84947b5bb8219f1c985c6831aef9dcca1ffdfc668dbb100609841a8.
- GitHub Issue: #10234 (https://github.com/soldieg/ReBLACK-XBOX/issues/10234).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
