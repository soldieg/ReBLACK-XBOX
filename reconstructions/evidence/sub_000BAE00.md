# sub_000BAE00

- Manifest: lot 108, position 74; address order. Candidate span: 48 bytes (0x000BAE00 to exclusive end 0x000BAE30).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAAE00; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAA180. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 48 bytes. XBE raw = derived PE = split = REA; span SHA-256 6640ad1320f66ada4cdc04c6cb740c9847b002da761a8c4ae9c22f7964f1cee7.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 48 bytes.
- Source SHA-256 6db9f8aa9460513323d67b15aa038ba75f48f56c89c5cde38b37d6d3da1becf6; compiled object SHA-256 6b9f4f550f71b77c6580e0c9315860b200ad349a0365f9d4945172500ad6f481; candidate object SHA-256 e84f240ca886a623870bd2d63d3e627b9bd3820f4b23f735f08dcf6cc8356715.
- GitHub Issue: #10087 (https://github.com/soldieg/ReBLACK-XBOX/issues/10087).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
