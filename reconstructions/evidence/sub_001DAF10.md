# sub_001DAF10

- Manifest: lot 139, position 79; address order. Candidate span: 222 bytes (0x001DAF10 to exclusive end 0x001DAFEE).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1CAF10; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1CA290. REA read_bytes evidence ev_e90ecf86f84c5f25769c8de29d5a4799b9bfd8da47c5cb4f713f3f7607644260 returned 222 bytes. XBE raw = derived PE = split = REA; span SHA-256 170b45bb7420fea295fcf6a580ecd26465b8ab5dcd338c8274b02819f8b310b8.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 222 bytes.
- Source SHA-256 b308f27fcb2255c6403773d31900a7b8947d01016b431c9b44bde1a83d59a1a9; compiled object SHA-256 c85767e52acd10c31e959ba26fa769b5436cf00eb2f0abd3033ab0dcac6a135d; candidate object SHA-256 48aa0372b717936d27b08b2d34102ce25442dc9c9bf9fdb201be4dc6cdac90f1.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
