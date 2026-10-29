# sub_001F6EE0

- Manifest: lot 143, position 71; address order. Candidate span: 47 bytes (0x001F6EE0 to exclusive end 0x001F6F0F).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E6EE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E6260. REA read_bytes evidence ev_b200bd2bd08c2ed3cb4563bc141bd2418f93a8a862ce240441b376bc8fa4ae95 returned 47 bytes. XBE raw = derived PE = split = REA; span SHA-256 0ead97835dd6e5b7ce9575dee2915e79caa03a59ebeec5b640da023fda1bbab7.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 47 bytes.
- Source SHA-256 6116d0160270fd5ba676963ef9322213a3674f262980a14ea9abf7d66bba06d7; compiled object SHA-256 d3d780205bbfa1c10da560d829d6059baf7241bbd0d956f908249ac8722be915; candidate object SHA-256 22cc1f574d06dcbab3729342de446e54e17b46d124ca05e854c88ab286a00057.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
