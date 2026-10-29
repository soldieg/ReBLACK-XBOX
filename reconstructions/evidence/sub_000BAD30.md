# sub_000BAD30

- Manifest: lot 108, position 73; address order. Candidate span: 208 bytes (0x000BAD30 to exclusive end 0x000BAE00).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAAD30; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAA0B0. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 208 bytes. XBE raw = derived PE = split = REA; span SHA-256 d3ff7897c4e3501db863fbe746901e038d1c7b95b39d3be678a61b8711ffa14f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 208 bytes.
- Source SHA-256 840f30857bc9c61d2cb37dc3700db1e667bf44bfac0ce36f9753f0af47c3f443; compiled object SHA-256 aff864be7581bb2c7935fc79269413c1c1944f42b70b84018e3c3c01e70a2474; candidate object SHA-256 d38213b707e5ac4fc4dcd49ce21e9b482ffc5cea5735de6d1411510c38b2d0c7.
- GitHub Issue: #10086 (https://github.com/soldieg/ReBLACK-XBOX/issues/10086).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
