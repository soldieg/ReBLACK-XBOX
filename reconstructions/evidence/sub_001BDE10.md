# sub_001BDE10

- Manifest: lot 138, position 44; address order. Candidate span: 12 bytes (0x001BDE10 to exclusive end 0x001BDE1C).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ADE10; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AD190. REA read_bytes evidence ev_d9bd91147c11f19f22bda9b44d5298418e0bb38e3a0fc7d659ed6c6cb7ea05a3 returned 12 bytes. XBE raw = derived PE = split = REA; span SHA-256 c092ec27d993e9f7cbe3f0ba8f10c52a9385b8a421c25d7291af21adb5aefe23.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 12 bytes.
- Source SHA-256 26955b5c1f7996975b1d40b75b95fc0fa3b56005df05bef67bececbc7db605f4; compiled object SHA-256 90f0c754b625dfbfa17a3c320454bd5b972a9b605cd58f483dd0a6977666671a; candidate object SHA-256 4e50fcaf0b692866035ccf4ed76866f8132adf928ab80f01b4ac8c7e5dcfe3ac.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
