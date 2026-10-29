# sub_001F1AB0

- Manifest: lot 140, position 54; address order. Candidate span: 3 bytes (0x001F1AB0 to exclusive end 0x001F1AB3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E1AB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E0E30. REA read_bytes evidence ev_1af677991495a1d9286c89c3048d39911ef89bd25e84b2eb53f5b2384238a54e returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 7a0648aae0293163896f7c3ddb6db57a05eb684c8dd9d9369ad2649d81db4d26; compiled object SHA-256 6c6cd44da2adbac15c3bbf36194cf12c512c97c09c882a00dc525b62557651b0; candidate object SHA-256 98aad77a010cfd448a9a9623da197c328bc9f7884224674fd741322c4dbf32f0.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
