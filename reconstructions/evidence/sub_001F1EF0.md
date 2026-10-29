# sub_001F1EF0

- Manifest: lot 140, position 87; address order. Candidate span: 28 bytes (0x001F1EF0 to exclusive end 0x001F1F0C).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E1EF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1270. REA read_bytes evidence ev_7bc2c85f6b6293e5c4921928e7a6f8d1223f296c97b7282d0a6417140172c9f7 returned 28 bytes. XBE raw = derived PE = split = REA; span SHA-256 08b4eeafc0bb2964153d378a22740cbfeee4dc6b987832556cb5b81501ce4939.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 28 bytes.
- Source SHA-256 2946a1df14552961313764b4ad49ebe0e3794f6d64b94d9ce7c7b71b54370398; compiled object SHA-256 3ec3d09fe79ef73c5a50a2dbfb1aa116ade9a9733740e921d9cefcbb240bbd20; candidate object SHA-256 b44a48b518edc3191712ef3edae8a5cdfc05384c57063876588e62062bbf9b83.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
