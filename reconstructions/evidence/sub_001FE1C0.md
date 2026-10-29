# sub_001FE1C0

- Manifest: lot 144, position 15; address order. Candidate span: 5 bytes (0x001FE1C0 to exclusive end 0x001FE1C5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1EE1C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1ED540. REA read_bytes evidence ev_b7d6b3b9e1da28002f19ae67b18bc365c015ff8cbac417c4cd06666e8be3a3d1 returned 5 bytes. XBE raw = derived PE = split = REA; span SHA-256 b7f9d35c666ae885d83bf816cb11e3656c8e381e8619eccb80068c0d7fc66aba.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 5 bytes.
- Source SHA-256 6c16e91387585daf3c97f768aa22651d438585266a2580e56e4592b98cdb821d; compiled object SHA-256 ab70e1ac7de2495585d34ecc7a231246f906d8a884411034b127e15192a7f1d4; candidate object SHA-256 eeda4f2ac40a14723647737b3444be5818867fbf1fed7662b6e4eddd28704c69.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
