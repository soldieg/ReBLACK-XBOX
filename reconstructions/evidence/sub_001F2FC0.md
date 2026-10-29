# sub_001F2FC0

- Manifest: lot 142, position 12; address order. Candidate span: 7 bytes (0x001F2FC0 to exclusive end 0x001F2FC7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2FC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E2340. REA read_bytes evidence ev_48873a1540754621ba666914926d2c56ef0eb0a5739770f533569373ec4c59ab returned 7 bytes. XBE raw = derived PE = split = REA; span SHA-256 c5331061bddfe59b87745e2d402a0dcc9ac42a04935051bc749c17b588eafd6a.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 7 bytes.
- Source SHA-256 132f64663a3ad7d5d081d4edbce537f9cbdb9727afc33c9c5174794f6ae8a0ff; compiled object SHA-256 37b4fb03ea35d81dbcc836e9123ba18d91d6a86e2560af372fd70bd64bd248cc; candidate object SHA-256 bc2bb704752b5584d0a4798c47a2d8af0869c50ae3e65ac6f0f5316fe38fa736.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
