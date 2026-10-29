# sub_0009AEE0

- Manifest: lot 105, position 81; address order. Candidate span: 58 bytes (0x0009AEE0 to exclusive end 0x0009AF1A).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x8AEE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x8A260. REA read_bytes evidence ev_20b8a8d722153def3f09f483e16cec6c5489778136e0ac1efcbcb008fef6441e returned 58 bytes. XBE raw = derived PE = split = REA; span SHA-256 0a2f20831ef365bc498e4cafb46b44c29ef7d2fcc8e72f5d3ba43bf3863e7a9e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 58 bytes.
- Source SHA-256 4085e158837950a76e32a9eae6d78835cfdcf703a689fff596d222736505ffbc; compiled object SHA-256 05d90d87b10e3d81f3336cf00233f1881ee53f6fa70f460761f3799cfaffc511; candidate object SHA-256 b16d5a165bfd4a8fbcede0a7d4d4eb860d3d254ce6094617a48b79df4ee446ab.
- GitHub Issue: #9818 (https://github.com/soldieg/ReBLACK-XBOX/issues/9818).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
