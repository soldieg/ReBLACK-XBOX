# sub_000BF5B0

- Manifest: lot 109, position 74; address order. Candidate span: 1 bytes (0x000BF5B0 to exclusive end 0x000BF5B1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF5B0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE930. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 dd571a68252c5d04960eab25efdf005239265582101a8c1f9be510cf3dc30cde; compiled object SHA-256 a6f2daa7c298c9934b6a9129b12c23fc1d1b2986fe5092dffd6037c3ea175ce6; candidate object SHA-256 731b61f52016fd75411e263aa957c80185fd8617eae571729bc12c961101094b.
- GitHub Issue: #10171 (https://github.com/soldieg/ReBLACK-XBOX/issues/10171).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
