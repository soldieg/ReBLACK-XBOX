# sub_000A9D7F

- Manifest: lot 106, position 64; address order. Candidate span: 45 bytes (0x000A9D7F to exclusive end 0x000A9DAC).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x99D7F; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x990FF. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 45 bytes. XBE raw = derived PE = split = REA; span SHA-256 6413a53e9c6cda8eb9d2cade66738aff326fc9f2ecbeee398965eb33c53d5824.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 45 bytes.
- Source SHA-256 2a1dcc3fc2d2374d4238306154283be52f0f552b2dec5ae2c7f67b6282746206; compiled object SHA-256 0398c034a91647617cda671a91d9cc025de34c01a063087e5ba9fccbd7a5b768; candidate object SHA-256 20bf4ec6318818964e6f663ea34202d8e5e8aa766d4f39b650a89443ee7fd4df.
- GitHub Issue: #9892 (https://github.com/soldieg/ReBLACK-XBOX/issues/9892).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
