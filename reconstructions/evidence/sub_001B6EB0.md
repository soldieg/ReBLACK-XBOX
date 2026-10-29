# sub_001B6EB0

- Manifest: lot 136, position 54; address order. Candidate span: 176 bytes (0x001B6EB0 to exclusive end 0x001B6F60).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 0011c3f5@0011c3c0. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A6EB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A6230. REA read_bytes evidence ev_3488e6ea91c8345c5089e106e981c91cc0474c263497eaced83620a44cfb4925 returned 176 bytes. XBE raw = derived PE = split = REA; span SHA-256 43ed0effd93126020c1705c055eac6fa49937357afb0f9f3abd9adab8031e4a2.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 176 bytes.
- Source SHA-256 dbc0785d3c998755711f44e217f67fc2761cf71c9848cf257e50451c85a620f1; compiled object SHA-256 2c1718a4469279591987a2c8beece726f60307ac76fb15eaf6b94cf47f4d4d77; candidate object SHA-256 a47a436b0123eda5109aa21ed3cc508333abf345b1197f116462791b8bd7cad6.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
