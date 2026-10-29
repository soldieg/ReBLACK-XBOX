# sub_000BE9C0

- Manifest: lot 109, position 17; address order. Candidate span: 1 bytes (0x000BE9C0 to exclusive end 0x000BE9C1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAE9C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADD40. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 bb1ecef4e207742c5ebc06f1eba6740d96b44892c15ceffad274e2ac4ccdaeb2; compiled object SHA-256 0ac3590f2701717264123c23aa42c0a622b169617fb5d897f659639e6676e72e; candidate object SHA-256 b8cca1c6c28bb93e96b66f19b5a9fe3175c7123f1a9a5d1371228f3f30d17947.
- GitHub Issue: #10125 (https://github.com/soldieg/ReBLACK-XBOX/issues/10125).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
