# sub_001BBE60

- Manifest: lot 138, position 12; address order. Candidate span: 7 bytes (0x001BBE60 to exclusive end 0x001BBE67).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ABE60; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AB1E0. REA read_bytes evidence ev_ca4813444f52817ed6655411bf75c3305637fd85d5d44fdaa94ac7fd7aa29cfb returned 7 bytes. XBE raw = derived PE = split = REA; span SHA-256 9fd80c5816ba8e57cf993bc725d5000650f34fef7cf0da84e4d0377501f28353.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 7 bytes.
- Source SHA-256 11538f449148d9c53a0f2e98aec37c98f4158188ddee35114569be2e16569bdf; compiled object SHA-256 6a13ae1f952fc76a139c944283f389a7b54571f659eeb56a849c226323257348; candidate object SHA-256 ced35a9d4dc77b1ab2b8820053b12473e2425bf54a8967fae0159fbba6a69068.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
