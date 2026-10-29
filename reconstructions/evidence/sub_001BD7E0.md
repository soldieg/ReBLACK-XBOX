# sub_001BD7E0

- Manifest: lot 138, position 32; address order. Candidate span: 3 bytes (0x001BD7E0 to exclusive end 0x001BD7E3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AD7E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1ACB60. REA read_bytes evidence ev_752845da4c6fed21cf5f63bc0f42997d8f253134878e11a6899e0b69ec2b72d6 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 d8c65aac25077225011ca0ab99272defce1f2419d890ac3a233aa62a00e0bd5c; compiled object SHA-256 0efd90581a55fbf3a401c3b97ac644c6c7b313ed37eda0ae80ffb4626bb4276c; candidate object SHA-256 989fd4a1b7335bea672ac120ffb030e547981d66ee2ae76451cb92dcc1f992f0.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
