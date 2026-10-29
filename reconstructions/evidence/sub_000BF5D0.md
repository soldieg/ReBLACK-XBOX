# sub_000BF5D0

- Manifest: lot 109, position 76; address order. Candidate span: 1 bytes (0x000BF5D0 to exclusive end 0x000BF5D1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF5D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE950. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 d29aaee5ebdd49192fd0d9e39b83dc19d3e354e8f58683c0af016413cf68f231; compiled object SHA-256 391c0f2dde845e89ab4e8294e99ac338957cfe3ed3fd814aa830a9d10487f9b8; candidate object SHA-256 c9698da012ce9c31eae61ce1635fb8613529e9f672b9d506c38ee847a7a272d6.
- GitHub Issue: #10173 (https://github.com/soldieg/ReBLACK-XBOX/issues/10173).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
