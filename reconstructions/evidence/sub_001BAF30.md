# sub_001BAF30

- Manifest: lot 137, position 93; address order. Candidate span: 59 bytes (0x001BAF30 to exclusive end 0x001BAF6B).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AAF30; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AA2B0. REA read_bytes evidence ev_a28b148aa033b896c38b9e68e8f50533544858dc22fe822eaf4e3d2a43c18b0b returned 59 bytes. XBE raw = derived PE = split = REA; span SHA-256 aa75f4d7bb1d7064a53fb00d553026b9a564f5150776d2d69ed5581304fd5c7c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 59 bytes.
- Source SHA-256 cd9feaf1dec8d36da6f62e8d73a600cd5a9279af4e4c9831cdb118249d4a0651; compiled object SHA-256 c13f7d4f67e6532ca4c4e147cf74b3523bec3aba897980a842e0d8ae36f493f8; candidate object SHA-256 e552ff67931b80c27366ea62f369944687601c17999d7161ab83b29d5d86de30.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
