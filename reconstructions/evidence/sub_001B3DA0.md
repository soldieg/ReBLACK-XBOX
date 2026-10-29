# sub_001B3DA0

- Manifest: lot 134, position 11; address order. Candidate span: 25 bytes (0x001B3DA0 to exclusive end 0x001B3DB9).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A3DA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A3120. REA read_bytes evidence ev_a848732f899239ff5d795a0d97ddd2ba36800ab4ff40215eba2d5e3dde0f8af3 returned 25 bytes. XBE raw = derived PE = split = REA; span SHA-256 6eebaf4b3e24313803c9f85e9bdf365207bd83b5e0d5964888831f3ed007f201.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 25 bytes.
- Source SHA-256 42b78a2f3c8059d88c7cbea71997b9e1d86e589cff36cb2c97bbe2b6b67b5335; compiled object SHA-256 11fce77f6954df35bc165d0dd3b7477de907b81cfc7238f72f1a30cf9775dbde; candidate object SHA-256 ee8ed0615d4d290c05c4edc9c79a100aee8b50b5fcad6e56a5eb5179ead1edd3.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
