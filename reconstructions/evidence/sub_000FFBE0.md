# sub_000FFBE0

- Manifest: lot 115, position 50; address order. Candidate span: 22 bytes (0x000FFBE0 to exclusive end 0x000FFBF6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xEFBE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xEEF60. REA read_bytes evidence ev_053a47a022dc6492f29ff0b59db1ce36b55702940b869df5cc0b44f474231eff returned 22 bytes. XBE raw = derived PE = split = REA; span SHA-256 1752cd8b4e2caa6a5030c934b413312dacdd394ee539f93ea6b4c7e8cfd59908.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 22 bytes.
- Source SHA-256 8534bce994f6cbd1cb82b30692d351ff9030ccc014ac01fa5beecbe8f43913df; compiled object SHA-256 6be016d09d8b8b81d2b102ecdde4e9264611f58ad62342a25278c444edb466b5; candidate object SHA-256 3b871e31d76f3982e25858293789e8135cc790c1ca8580bcb5658fd84661cc6e.
- GitHub Issue: #5938 (https://github.com/soldieg/ReBLACK-XBOX/issues/5938).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
