# sub_000C3DC0

- Manifest: lot 111, position 95; address order. Candidate span: 16 bytes (0x000C3DC0 to exclusive end 0x000C3DD0).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB3DC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB3140. REA read_bytes evidence ev_1170f83c433f4613954d883277e925781c638dfc0a34bea8c82e4d4ebc1890a7 returned 16 bytes. XBE raw = derived PE = split = REA; span SHA-256 987db21369082030cc6c94acee812df4110b6696a8c9d13c8daf21fcbd5ef64b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 16 bytes.
- Source SHA-256 16167a8cadc3ced7ce61f3597f44a27a44cb9d36fce0690e22e8f88ce56b186c; compiled object SHA-256 dd195b150d738991592e97efbb2fe4e8b5be448bb72c30234393491c5774d641; candidate object SHA-256 5493d88fb895d3262017b7fcb4fbefd55808aaa9ce61ae44c74c581bca6d0ef4.
- GitHub Issue: #10338 (https://github.com/soldieg/ReBLACK-XBOX/issues/10338).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
