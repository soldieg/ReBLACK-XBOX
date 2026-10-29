# sub_000BFF10

- Manifest: lot 110, position 9; address order. Candidate span: 1 bytes (0x000BFF10 to exclusive end 0x000BFF11).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFF10; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAF290. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 869b3550ddef18f8654289ac032b1bf716be91194ea458814754690acec31ae8; compiled object SHA-256 a4898e553ecc4f3db0a85e13ccce79983ac72c3d34799a682c5ddfd5a7863c06; candidate object SHA-256 5d2d22a42720196d2f6fb35de01bb2a5cdbec71b871c4ca572e5155c0b4a4f36.
- GitHub Issue: #10203 (https://github.com/soldieg/ReBLACK-XBOX/issues/10203).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
