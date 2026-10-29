# sub_000AAE70

- Manifest: lot 106, position 75; address order. Candidate span: 6 bytes (0x000AAE70 to exclusive end 0x000AAE76).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9AE70; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9A1F0. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 8e1b7a2f74aed475200528e7d8efbcb175b74de96d86f97235e297c462e10ec1.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 acaa6c95c960b81c4d17a34371da980e3a382e9dabf49dc0c7e7ca4c911153ef; compiled object SHA-256 9b4fa66a0fc18c069165ae12b9d9a39b4574e0d389f7eb5954be3882fcba40d9; candidate object SHA-256 eb7a66adfe64581e833a96a54273e666822330d4481ad3ba2ee1129ae091a693.
- GitHub Issue: #9902 (https://github.com/soldieg/ReBLACK-XBOX/issues/9902).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
