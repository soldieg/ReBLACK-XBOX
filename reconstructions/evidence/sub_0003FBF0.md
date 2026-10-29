# sub_0003FBF0

- Manifest: lot 102, position 86; address order. Candidate span: 24 bytes (0x0003FBF0 to exclusive end 0x0003FC08).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x2FBF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x2EF70. REA read_bytes evidence ev_ed07bf8894ba9892b1a677cc6898c80aa5c7af6075c194fab05b961646c5d025 returned 24 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae91710537debb284baca83a3e730ea94af0d3045a6ab10e13baa3842a29c5f4.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 24 bytes.
- Source SHA-256 b03ebf0b496d0c5098b333813f807dadc22cc26586b8f24c33d93b19dc65e1f1; compiled object SHA-256 c9b1f7f8aa405a1096e04638e28c9254bd97d0af53fcbd4a9bdac5dcb17cdb52; candidate object SHA-256 084f2a7218c939dcc358cd33e5e25779082b63f28841ae0f213cf1c5d283b346.
- GitHub Issue: #9602 (https://github.com/soldieg/ReBLACK-XBOX/issues/9602).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
