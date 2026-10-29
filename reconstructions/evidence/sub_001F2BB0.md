# sub_001F2BB0

- Manifest: lot 141, position 86; address order. Candidate span: 1 bytes (0x001F2BB0 to exclusive end 0x001F2BB1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2BB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1F30. REA read_bytes evidence ev_3e49f9c473eaf65768b626466d0bab57d2f05c799e727de94b7248fb882611d8 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 fc9eb22ee805362dd2e73a2bef24dea19de383149e6669feffddc635bdf3987f; compiled object SHA-256 9c9ac99a998f7e0800b14f872e50ca2cc8d9efe722ee8e5ceaf4f4015a6cb701; candidate object SHA-256 b9d39384de1f01ab6b98831b01bafef3643f0759c69b1240e70a434125a398bb.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
