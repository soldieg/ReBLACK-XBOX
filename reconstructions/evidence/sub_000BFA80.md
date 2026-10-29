# sub_000BFA80

- Manifest: lot 110, position 1; address order. Candidate span: 6 bytes (0x000BFA80 to exclusive end 0x000BFA86).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFA80; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAEE00. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 d63b4427fd7085e23851863056c4fed492253ba2dad53b8ae7a8798c301a33a1.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 28a684b684e9256e490cb2b9422ac4aa7b5267e850a8b6446a7328b5a13c35da; compiled object SHA-256 dd1bc302b6e3c040797efb2de07c42f0f018fd1cf732063390a8b02332121857; candidate object SHA-256 f9ddd29ef13da669c9d484b8ce6ba1002161ee215f08480f0b95aad871e10c20.
- GitHub Issue: #10197 (https://github.com/soldieg/ReBLACK-XBOX/issues/10197).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
