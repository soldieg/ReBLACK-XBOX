# sub_001CFAD0

- Manifest: lot 139, position 37; address order. Candidate span: 31 bytes (0x001CFAD0 to exclusive end 0x001CFAEF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1BFAD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1BEE50. REA read_bytes evidence ev_a38901670b01a5342cc252fed4970dede2db22a96a7529bef14a3e5d0700b50d returned 31 bytes. XBE raw = derived PE = split = REA; span SHA-256 fc803d03de6dd61de7c92eaaaae8d9922022fba01c12e97bf783324b84e663ac.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 31 bytes.
- Source SHA-256 4df87228de49a6095330bd587f12c064442c05dd96b7339677010c8d34e17304; compiled object SHA-256 785f14c7f5d8c65abebbded9569a209139cff007cf9de9bc81eb767702017502; candidate object SHA-256 8f32746d702cb74635e4a4f0eccf6f833b9062be406375fad7bc18359c239ad4.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
