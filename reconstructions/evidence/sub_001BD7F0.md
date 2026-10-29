# sub_001BD7F0

- Manifest: lot 138, position 33; address order. Candidate span: 1 bytes (0x001BD7F0 to exclusive end 0x001BD7F1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AD7F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1ACB70. REA read_bytes evidence ev_6d605b7f5b0234cef80327df9071d64c9f04c7c60c67f4ca6d20b76d97a93a84 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 a364e0eb3dfcd23303778e0fad2e9d897f12052e91660de176f18558a07288ae; compiled object SHA-256 b73d2825cf33322ad7b38eb05055c2601f64b50f3c5dbacebc2052664bed8ff4; candidate object SHA-256 31e86708e3337a58520efa1a0fa7a43a6d38154d3863ed2f06923225275db04a.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
