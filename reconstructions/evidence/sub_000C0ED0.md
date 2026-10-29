# sub_000C0ED0

- Manifest: lot 110, position 62; address order. Candidate span: 14 bytes (0x000C0ED0 to exclusive end 0x000C0EDE).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB0ED0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB0250. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 14 bytes. XBE raw = derived PE = split = REA; span SHA-256 d1b3aecd31020765bc151bf7928a581efcf191ea1e3b61db097a129a952b19e2.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 14 bytes.
- Source SHA-256 d6a34597e8e9c1df72e06094c1842a13531b16b77f2be8fe3de248d681b0e5d6; compiled object SHA-256 93dab17fb4f3aacf8ec3e605158fa2dca2c29e7d204ba67f33ef579be376947e; candidate object SHA-256 2aed2b699550d16f5f6faa6a5c1fdf2ce78416bd84b54bc59f9d10b42356956c.
- GitHub Issue: #10232 (https://github.com/soldieg/ReBLACK-XBOX/issues/10232).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
