# sub_001B3FB0

- Manifest: lot 134, position 24; address order. Candidate span: 3 bytes (0x001B3FB0 to exclusive end 0x001B3FB3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A3FB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A3330. REA read_bytes evidence ev_b6ce271b517db65c88578baefa5ead202cb08dee57f6266afc4ed611f77d300d returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 b6fc3a9ea0896e5943662c03c0846f778e629404ddd60b3a1fd544e439b4c626.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 e6ed473305f86b8b6dba80bcc00f7ceeb2948d611ae1c005cac2b004043bde0f; compiled object SHA-256 e509821d77f0b4f9132014e300a156b9681b49330558217a934ecc7ebd236dd8; candidate object SHA-256 e9a0a31ca07c211eb4c632445d552ce48c18f3438c7c126a4b2ccb7ba2b5ade6.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
