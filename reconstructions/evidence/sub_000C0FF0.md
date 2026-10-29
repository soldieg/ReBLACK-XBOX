# sub_000C0FF0

- Manifest: lot 110, position 76; address order. Candidate span: 1 bytes (0x000C0FF0 to exclusive end 0x000C0FF1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB0FF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB0370. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 30606d3f2a15e06328505eeba2e0b79303a7658d904dbcad05611005cfa9d2e3; compiled object SHA-256 de6a98f0f0b0815999643bed9f6779d1dd2acb0bdade66da6de1a48b7563d150; candidate object SHA-256 d237b4d8ed970edcf8a6c8a6e710c8f22ee71bd52408180982930f689e26e1f0.
- GitHub Issue: #10245 (https://github.com/soldieg/ReBLACK-XBOX/issues/10245).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
