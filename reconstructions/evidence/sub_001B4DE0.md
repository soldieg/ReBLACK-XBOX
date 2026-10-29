# sub_001B4DE0

- Manifest: lot 134, position 79; address order. Candidate span: 9 bytes (0x001B4DE0 to exclusive end 0x001B4DE9).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A4DE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A4160. REA read_bytes evidence ev_09efe6c8a434cae55e372aaf25edc6f2552afa2997438f26c40505e04202fca8 returned 9 bytes. XBE raw = derived PE = split = REA; span SHA-256 506b6f3a1968415501a8e334f1c016c02b6c5abca5b17b2aefd436c3bbbc02db.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 9 bytes.
- Source SHA-256 e7febea459d9cc90110272aee5e02c054a9e9f70ba06632eef4a25a96264d4eb; compiled object SHA-256 57939f3d511c527b3f0e13e6230ada56359df0afc9cfb296518989c11c01897f; candidate object SHA-256 8a34777d520a1239614151b481763b3cbb594fae0824515acb156f1482e30bed.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
