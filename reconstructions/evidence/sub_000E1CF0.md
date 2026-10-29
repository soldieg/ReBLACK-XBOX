# sub_000E1CF0

- Manifest: lot 113, position 11; address order. Candidate span: 24 bytes (0x000E1CF0 to exclusive end 0x000E1D08).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD1CF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD1070. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 24 bytes. XBE raw = derived PE = split = REA; span SHA-256 0d7f1c298e7284f00cd1478d3d83a153cd8ddeaca8d88194145a3cb23c46b031.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 24 bytes.
- Source SHA-256 0e1bae2e5ca7625e4bc6dc1ffcd07ed815e3f83bd964ad215c8388f0178a7ed1; compiled object SHA-256 f50ac8799c195acf0c0e927b668c6906b921d9a710046f2f19c0cd740b4f2d84; candidate object SHA-256 201eadc967b8b8b7cfb70fe6ed2a2ecf8fc860fe99513676b18432aa6fb45617.
- GitHub Issue: #10424 (https://github.com/soldieg/ReBLACK-XBOX/issues/10424).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
