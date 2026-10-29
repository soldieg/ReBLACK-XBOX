# sub_001BC0C0

- Manifest: lot 138, position 15; address order. Candidate span: 86 bytes (0x001BC0C0 to exclusive end 0x001BC116).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AC0C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AB440. REA read_bytes evidence ev_95af5177dd75b54bc6b28216cc8fd6727b9c7f1832a03d6541884379d1aa1f2b returned 86 bytes. XBE raw = derived PE = split = REA; span SHA-256 10ae9b73e9c88bed1d79216083477b593324f6dbd080e04a382050bef8103f01.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 86 bytes.
- Source SHA-256 033f80548dad133cde67997834cdfb49e40d55d5d00910ebf6b3efc859c730e8; compiled object SHA-256 b936c926125825bc4b08e6853fb8324639ae3b6f736dae50feb8bfa16c0a905c; candidate object SHA-256 6ac85823250f58c98673f70ced158255a6ce0e3b0c8ec1247848e201b565d12e.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
