# sub_001F3DF0

- Manifest: lot 142, position 50; address order. Candidate span: 1 bytes (0x001F3DF0 to exclusive end 0x001F3DF1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E3DF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E3170. REA read_bytes evidence ev_f0549f749a430cf2e01e241b0f93c851c92a2c6fbb4b081e829057947b3b33e2 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 d4c8ea06d7713ecf5b52a4c5d032559827ea1b63a006af91ee735020da58a20b; compiled object SHA-256 adfe52dda01adbdabb2cf6f26a2d75d8c1ceed72d43dfa9a466222ee7adb29c0; candidate object SHA-256 46c7b44ef52e869acf8059ba92a453074fd546ea4a429d7c445ba5134b8463f3.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
