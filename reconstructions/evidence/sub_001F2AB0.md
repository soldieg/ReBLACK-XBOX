# sub_001F2AB0

- Manifest: lot 141, position 70; address order. Candidate span: 1 bytes (0x001F2AB0 to exclusive end 0x001F2AB1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2AB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1E30. REA read_bytes evidence ev_313dc1412abd2ad9533a65e84b6c772a3c9d83307fd13ad5f28f24edc5e1630a returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 2dc35d2ccad2243ccd367571a25057679101f32064ea97f493e511ddccaa5889; compiled object SHA-256 5e149182ee3dd9a7d6f0e5b920e772cebef0e12a15b6edcaed5362999d07b39b; candidate object SHA-256 a6301efdb503ecfecf0f19af63498d71a55347fd9c5e1f5bdec8033070ec8075.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
