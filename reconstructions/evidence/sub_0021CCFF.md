# sub_0021CCFF

- Manifest: lot 150, position 60; address order. Candidate span: 28 bytes (0x0021CCFF to exclusive end 0x0021CD1B).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x20CD3F; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x20C07F. REA read_bytes evidence ev_e0ae885582ecd62244223b1afed44756e58718349461a08c3d48151bdecbb766 returned 28 bytes. XBE raw = derived PE = split = REA; span SHA-256 ecdc1d3691c7ce7ffaecc7509a48f82a06af4ff393b7824d42607fb9b9929d99.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 28 bytes.
- Source SHA-256 a238260d5b188cf95a3897fd408f0d9711f6f5115aeaf0ba9af340607491d687; compiled object SHA-256 9abe394738d834ce09f206075c37acfe5ae88fcab91ea417ca826aa8d9dcb05e; candidate object SHA-256 9b90e8ba0ae9a86aff85775a9b8fff22554940e8172cd9a9ba9250514ee01729.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
