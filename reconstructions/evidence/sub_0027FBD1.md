# sub_0027FBD1

- Manifest: lot 151, position 83; address order. Candidate span: 43 bytes (0x0027FBD1 to exclusive end 0x0027FBFC).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x26CCB1; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x26B411. REA read_bytes evidence ev_2b1c9ef093c602fe24dac9f102471436146d5a19b5c64db58fbc370aeff50831 returned 43 bytes. XBE raw = derived PE = split = REA; span SHA-256 70572ec51b2f466492ac1b200ef888089cc5630e1cc1cfd78c0d6b61661d6ef0.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 43 bytes.
- Source SHA-256 db182b19fd2359311ae1eabcc6d71fafec41e37c49c9ea45c420160ea5694cd4; compiled object SHA-256 57a1324a3e1ebe221d2927ea397ea1cf25bf0f5326f84dd8ca69c55b88eaeb79; candidate object SHA-256 371bd1f7c562ee8bf4c2b82bc2a038310365ceaa10a2654a8434f30742ab5d82.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
