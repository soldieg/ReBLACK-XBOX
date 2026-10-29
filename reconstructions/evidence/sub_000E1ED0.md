# sub_000E1ED0

- Manifest: lot 113, position 17; address order. Candidate span: 12 bytes (0x000E1ED0 to exclusive end 0x000E1EDC).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD1ED0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD1250. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 12 bytes. XBE raw = derived PE = split = REA; span SHA-256 aafe897687b975f7f42996b2fbe3dcc3f2e23b60bf9d2ae82744af2940eb2330.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 12 bytes.
- Source SHA-256 bf4ce630530cb7779176a0b722dd2fedcbdb60659d29f51f963d9e59381239a5; compiled object SHA-256 701dbf176833ecb86ef02c30113bc19b2f743fc63393d83f50ae62b08a552032; candidate object SHA-256 ec896f0d65af73ad10a8d9e3c42a9a9ad7e4f34425807e3facfb90158528bf7c.
- GitHub Issue: #10430 (https://github.com/soldieg/ReBLACK-XBOX/issues/10430).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
