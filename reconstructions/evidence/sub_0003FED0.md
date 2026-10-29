# sub_0003FED0

- Manifest: lot 102, position 87; address order. Candidate span: 165 bytes (0x0003FED0 to exclusive end 0x0003FF75).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x2FED0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x2F250. REA read_bytes evidence ev_8138f963661f152473943355f6367616cebd248d95d33a88d74d846caa220e25 returned 165 bytes. XBE raw = derived PE = split = REA; span SHA-256 6f2a96538906d5b0b12e30ae0b987ec543d3c2a9035d5bf35f3dcbc40be3ba7f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 165 bytes.
- Source SHA-256 ad8d118b5996f3c9f823acced53e800df28117e128c6c12c9570bfd814c42965; compiled object SHA-256 d974013695928e6c67ea97d36d9d81622d8f8cb08834ba0516566e8c4281eae2; candidate object SHA-256 adf16a23f657e85b31d6175d8add5b3f20e28dc5c8116653a7083dfb62ad5924.
- GitHub Issue: #9603 (https://github.com/soldieg/ReBLACK-XBOX/issues/9603).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
