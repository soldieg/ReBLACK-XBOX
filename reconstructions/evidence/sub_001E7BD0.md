# sub_001E7BD0

- Manifest: lot 140, position 6; address order. Candidate span: 1 bytes (0x001E7BD0 to exclusive end 0x001E7BD1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1D7BD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1D6F50. REA read_bytes evidence ev_6eaeaf23a178c31fde65c933fabdf7252100dcf3aff745757d82aeb80e1b63ba returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 c89288510e29e94454f8a9ab0682e3f13e8f42a5ffd6ee0d395a76bdf8b9f6b2; compiled object SHA-256 ba4227bc4ec7e9b1b3e7ca66047f4d986d65f1219b8367083a203d8818421c71; candidate object SHA-256 570c780c494cb1f1b0c041234ef8a65afa738ebe4bfab9f02aa0186f0731126a.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
