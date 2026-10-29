# sub_000BB3D0

- Manifest: lot 108, position 79; address order. Candidate span: 25 bytes (0x000BB3D0 to exclusive end 0x000BB3E9).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAB3D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAA750. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 25 bytes. XBE raw = derived PE = split = REA; span SHA-256 4e9a4f8a640ce95a0561c4b99b6ed64b09b46102143671854e4fbda6f5d9030d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 25 bytes.
- Source SHA-256 363edb9445913e13fbca65f63701affe6eeaa596fd4757450aca5803c73c8d7e; compiled object SHA-256 40c74113f04560c87d2c3e776046fc7ea908eafd9ba913441acc7e9ebe549068; candidate object SHA-256 ff0b0f12ee2d849434e5f2aec9252c72a049fd0fadb48e2a2c19457978aeab22.
- GitHub Issue: #10092 (https://github.com/soldieg/ReBLACK-XBOX/issues/10092).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
