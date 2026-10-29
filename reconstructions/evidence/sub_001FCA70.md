# sub_001FCA70

- Manifest: lot 144, position 9; address order. Candidate span: 11 bytes (0x001FCA70 to exclusive end 0x001FCA7B).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ECA70; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1EBDF0. REA read_bytes evidence ev_2758cd0081b7b80787411ff0d4f5cdd2d7ab141fbecdf4c1cf3604c6e352d678 returned 11 bytes. XBE raw = derived PE = split = REA; span SHA-256 cff46a74d9892e49827ca20c9c688292fff48d4c55a65a39ff084ef9959440e5.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 11 bytes.
- Source SHA-256 a3a7183545848d1ab609f2b48a337dd7bdf21e9cf0823dfb56d260ef6ac0c846; compiled object SHA-256 4e0e68848a421b961e227d19ed527d8aae6105539757719b91e4b353b24fb8b8; candidate object SHA-256 6b997a5bb493090f2b9f87b1fbbe026bd2fc3246cb923be4b60ec4d4aeff64cb.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
