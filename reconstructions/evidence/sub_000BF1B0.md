# sub_000BF1B0

- Manifest: lot 109, position 57; address order. Candidate span: 12 bytes (0x000BF1B0 to exclusive end 0x000BF1BC).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF1B0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE530. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 12 bytes. XBE raw = derived PE = split = REA; span SHA-256 bc230de73856d7f273bd8dbf8144dd03a9286a286e66f1df5ba97ca73cecb989.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 12 bytes.
- Source SHA-256 ae038c89f0d03bae2e8defbd06e068cf463ddb8dfbf4ffae356cbfacfcf1c0e9; compiled object SHA-256 cdefb569e6abfab0dc2f17ab20035bcca6e9ce5a25a5c859e93234a06a6cf296; candidate object SHA-256 62087cc110d4973007637c336cbfdd1654079b970e5a8f582688f809dc11fb46.
- GitHub Issue: #10157 (https://github.com/soldieg/ReBLACK-XBOX/issues/10157).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
