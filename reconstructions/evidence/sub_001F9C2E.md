# sub_001F9C2E

- Manifest: lot 143, position 92; address order. Candidate span: 16 bytes (0x001F9C2E to exclusive end 0x001F9C3E).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E9C2E; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E8FAE. REA read_bytes evidence ev_c6aa8ebc48ba236e385f28eaefd00cd0cfa4a0f8df9dcd818f4cf5ed8aef6e7b returned 16 bytes. XBE raw = derived PE = split = REA; span SHA-256 0a811b39bb3f1f002727c03bc6136606f6e8bf48855d50ca2b68d45d356d71e7.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 16 bytes.
- Source SHA-256 3c950859aa83796ca5bfc2c54c75fb5842f562479c9f6f489a36090b03a07f95; compiled object SHA-256 67a3411356ada871d5412a04fd54e835bb50fd3ff1e68307a287bee99723e5b3; candidate object SHA-256 51ec51546f0f34972efbd986a04d9b03a76c513c44440c96fc65a4c1ff5266ad.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
