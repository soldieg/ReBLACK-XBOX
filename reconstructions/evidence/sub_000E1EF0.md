# sub_000E1EF0

- Manifest: lot 113, position 19; address order. Candidate span: 6 bytes (0x000E1EF0 to exclusive end 0x000E1EF6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD1EF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD1270. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 8abfdfab22250f6e95390dcde1090409e3376d666e4537163e516aa4f692b4da.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 0fe9e0feb25c1ef9e9c87cffc643383e93940682d122fc673ee6f0ffbc2e4a29; compiled object SHA-256 cf76af424852fcba85f1d9c9c6284e29c526daed26436e5de9b9e6af309bb359; candidate object SHA-256 30cb9b03246b81f1b36583f2290631ff463b74dc4c45321c497c80a20e783048.
- GitHub Issue: #10434 (https://github.com/soldieg/ReBLACK-XBOX/issues/10434).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
