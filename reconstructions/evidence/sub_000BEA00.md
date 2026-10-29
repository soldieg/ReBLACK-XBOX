# sub_000BEA00

- Manifest: lot 109, position 19; address order. Candidate span: 34 bytes (0x000BEA00 to exclusive end 0x000BEA22).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEA00; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADD80. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 34 bytes. XBE raw = derived PE = split = REA; span SHA-256 006d291397dad198834752c30c03d39b4999c95478af5b7e1579c0d02985c9e0.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 34 bytes.
- Source SHA-256 fb72e717f9d909fc8088218676d165cfe5c5e3d72165fa2a1b09468e20393145; compiled object SHA-256 f450d9116f6549a1329403fedc35d4fe49855998dadde6e225c9375b90e4ed20; candidate object SHA-256 a7c836e73424f90198fafaeae24cc78756b52ecd067a5af4e88adce229f38349.
- GitHub Issue: #10127 (https://github.com/soldieg/ReBLACK-XBOX/issues/10127).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
