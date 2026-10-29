# sub_001BA2F0

- Manifest: lot 137, position 86; address order. Candidate span: 21 bytes (0x001BA2F0 to exclusive end 0x001BA305).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AA2F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A9670. REA read_bytes evidence ev_57087e1bf56e02759fdff47c21b6f2e1edb777e60ff18a2e937d9cd20ff46848 returned 21 bytes. XBE raw = derived PE = split = REA; span SHA-256 6ed48945ffb547d1ec732b714249f059bfaed3138a9dddd073cf15f0fae53c06.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 21 bytes.
- Source SHA-256 3e57b89f7f3c8226f30c7a91454ad4723c2d4094aa019b995cff454959784a4c; compiled object SHA-256 f660516440704442c4f47fa5b9bebeed7501dc5fbd743a1a630a0aa4145d7be6; candidate object SHA-256 a520a2be388d1d4e58773fcc43f6dc2fc818f787b1ec63b76bc390e4e90238f2.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
