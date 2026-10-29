# sub_000BF0D0

- Manifest: lot 109, position 48; address order. Candidate span: 8 bytes (0x000BF0D0 to exclusive end 0x000BF0D8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF0D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE450. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 8 bytes. XBE raw = derived PE = split = REA; span SHA-256 744918b125efbbb789c8b98c6a24d30827ec80d4a844e65c13c23082e5ae733f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 8 bytes.
- Source SHA-256 cce7079c4fc3b3e0fd0625a87b20800cba5787ef9f1030ce81e4f0ce96b84697; compiled object SHA-256 8105985c977aea2666c8a6c4470c91e1aa7f2bb4531c7833805ecd5180f9e4f3; candidate object SHA-256 2ffe9cffe42a838d58b0015d21ae7e41acbc0c1928f0364bf2e43a9a60bed890.
- GitHub Issue: #10150 (https://github.com/soldieg/ReBLACK-XBOX/issues/10150).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
