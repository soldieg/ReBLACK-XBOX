# sub_000BA1A0

- Manifest: lot 108, position 54; address order. Candidate span: 7 bytes (0x000BA1A0 to exclusive end 0x000BA1A7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAA1A0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xA9520. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 7 bytes. XBE raw = derived PE = split = REA; span SHA-256 73cba66042bca1cb7d06dcf56edcd86fd034709b51e41dc3c6f2c97df59fade7.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 7 bytes.
- Source SHA-256 15ef7ecf2b5d96ed6f0f64679bf7c7e71d98eb5f811ba1082e50573e6449c2f2; compiled object SHA-256 1f4552baf0e2833f40afa5362f3fd02091d4b3848dd0b21ec4697281b7b50418; candidate object SHA-256 b835a7fe46a91239688abdbf3dbe766e46faa37ba62fdae533a18612bbd5db52.
- GitHub Issue: #10067 (https://github.com/soldieg/ReBLACK-XBOX/issues/10067).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
