# sub_001F2FA0

- Manifest: lot 142, position 10; address order. Candidate span: 7 bytes (0x001F2FA0 to exclusive end 0x001F2FA7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2FA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E2320. REA read_bytes evidence ev_0b2d22cae7776afaa63b804da7344e4ef93e71b4f22dd1894f965969798a631d returned 7 bytes. XBE raw = derived PE = split = REA; span SHA-256 467a74b3d2c01665900699235121e69276c3920b2b01ee28a9ea02a6a061c572.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 7 bytes.
- Source SHA-256 9031b7d3180fbeeb765cc9aa6dd1b6119d80262473963aa54ab4cd4821a96bf4; compiled object SHA-256 2d966e1b6fda068bfd726a7ec869fff17a9b66f37e686337c0be2725457e2dd6; candidate object SHA-256 5c77216fd64710e7a107c03d9a9e65bad11abd4f4c47d6afaa568bee04ba7bf7.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
