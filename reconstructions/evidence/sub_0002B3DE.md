# sub_0002B3DE

- Manifest: lot 102, position 49; address order. Candidate span: 6 bytes (0x0002B3DE to exclusive end 0x0002B3E4).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1B3DE; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A75E. REA read_bytes evidence ev_fd52a2445a8f358b5c018dc37aca95e54e46f07e6b50a9c6aa57634b06b3aa54 returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 25ff45d2bdbdad46ccf283e963949d7cec8227add86b092e7b66b7a2b480a8f6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 2f065af1d4f7c719a0877afb334a7a8786fe1a27ae9d7c0beb5ca8bde211cc52; compiled object SHA-256 f7cf8132dda229fd84b1fa76033e78d8d0d38f263ced5082c7f37836350192f6; candidate object SHA-256 a197d9fa60c2cc1311f3fccbe13b6eff7b33e4f680e9a064cbe2c6b25dc68742.
- GitHub Issue: #9580 (https://github.com/soldieg/ReBLACK-XBOX/issues/9580).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
