# sub_001B9BA0

- Manifest: lot 137, position 50; address order. Candidate span: 17 bytes (0x001B9BA0 to exclusive end 0x001B9BB1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A9BA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A8F20. REA read_bytes evidence ev_c5eeb8c6d31c2eee914326ee13031518d3e14abbae5d933eb96391e7aafa5f35 returned 17 bytes. XBE raw = derived PE = split = REA; span SHA-256 0752ef242641a672c082de534c0f95e79207d8290b01a1fe74fdb0398ddee25c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 17 bytes.
- Source SHA-256 776d73c6a61a8bf59f9dc26e0f0da12432e1b3531a758f67ae568a27014a95fb; compiled object SHA-256 42e77c1e8687ae4d05c7c6fea9e157c99fe7e4965291c18eff6782d925d20e2c; candidate object SHA-256 d084352670bdbfbc256235f00380963d8972a77542f1f4655e96be433ff5c4b9.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
