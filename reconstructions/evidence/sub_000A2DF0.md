# sub_000A2DF0

- Manifest: lot 105, position 99; address order. Candidate span: 8 bytes (0x000A2DF0 to exclusive end 0x000A2DF8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x92DF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x92170. REA read_bytes evidence ev_20b8a8d722153def3f09f483e16cec6c5489778136e0ac1efcbcb008fef6441e returned 8 bytes. XBE raw = derived PE = split = REA; span SHA-256 81b6745f15f00b99965bf53e8f5b033e3e0ccc97e5f4a76c2d06eb3d3e3323e5.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 8 bytes.
- Source SHA-256 a5220d97452860398f71d25b4bc3a5b12989968e8dba5d1f1d163fcc4ea40940; compiled object SHA-256 0a1b977ab24a2e43d19f32efef6c40ceed10eb11f92d8a8efeebe31eaf30822c; candidate object SHA-256 ff2bd26480cc1ba4dc585109af09000b271c3e5651d2390c8cdbb04722eb6d43.
- GitHub Issue: #9834 (https://github.com/soldieg/ReBLACK-XBOX/issues/9834).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
