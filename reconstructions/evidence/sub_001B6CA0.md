# sub_001B6CA0

- Manifest: lot 136, position 39; address order. Candidate span: 7 bytes (0x001B6CA0 to exclusive end 0x001B6CA7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A6CA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A6020. REA read_bytes evidence ev_11e82ba6d562b06780c14d927095405b86876ce8a74f4d063855a7e3504cb241 returned 7 bytes. XBE raw = derived PE = split = REA; span SHA-256 347c62af6535bf0b993f9d29387128398178b9bbf7c8cb45f0826342c139aac6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 7 bytes.
- Source SHA-256 4520239ffba50c2d31554ce89289d907145a771b76a006fdf955d6ed4dd7924e; compiled object SHA-256 6277692419a11b606e9f2d6d9b2eb3cb0497e06946eb2a4f48091389dc9073c7; candidate object SHA-256 dccfa84f2bf62de87a27c661e6eccdfcc7cb4e687f85f4837930c2886d664e13.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
