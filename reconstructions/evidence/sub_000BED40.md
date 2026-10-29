# sub_000BED40

- Manifest: lot 109, position 37; address order. Candidate span: 42 bytes (0x000BED40 to exclusive end 0x000BED6A).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAED40; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE0C0. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 42 bytes. XBE raw = derived PE = split = REA; span SHA-256 a5472c31bf4c42ce0591389a5888485aca3d980030f93d4f6d1d96d3cfbc19c4.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 42 bytes.
- Source SHA-256 3f9f58ae4865952e5824e19446f94ddaedcd5a2f03f28a1b7c9f03eed556ba42; compiled object SHA-256 917c1a782e0cdfa6660428d725f0d57b459c4cba4865fbc95fd7580cb4b08a42; candidate object SHA-256 ff3a563e543e1a23d6b11dc4fff48f9a881e48abad37753a9462e6747ead5363.
- GitHub Issue: #10143 (https://github.com/soldieg/ReBLACK-XBOX/issues/10143).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
