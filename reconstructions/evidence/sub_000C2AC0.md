# sub_000C2AC0

- Manifest: lot 111, position 65; address order. Candidate span: 73 bytes (0x000C2AC0 to exclusive end 0x000C2B09).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB2AC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB1E40. REA read_bytes evidence ev_1170f83c433f4613954d883277e925781c638dfc0a34bea8c82e4d4ebc1890a7 returned 73 bytes. XBE raw = derived PE = split = REA; span SHA-256 a40e6133e193569d3cc675376e7280c43b400098a91736c35d4361d0df442cdd.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 73 bytes.
- Source SHA-256 e7f7ee2434d543046258387e4af1ea668d03e348f57614ea7fd9d0e05e5297d4; compiled object SHA-256 7c63c9d1a391ef25bf0a0b6cbd28554d383c8bccef2d18cb759ab9ba8bb71a56; candidate object SHA-256 b9fe8deb96bdf036f224bdf247b16d8469df56be6085673519cce8fcd3cf934a.
- GitHub Issue: #10318 (https://github.com/soldieg/ReBLACK-XBOX/issues/10318).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
