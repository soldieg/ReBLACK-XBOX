# sub_001ACC90

- Manifest: lot 134, position 1; address order. Candidate span: 79 bytes (0x001ACC90 to exclusive end 0x001ACCDF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x19CC90; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x19C010. REA read_bytes evidence ev_c8daf6a1b69e7cbe5ff377a23f53789ee826d8c843ab6125e35580356243153c returned 79 bytes. XBE raw = derived PE = split = REA; span SHA-256 9aaba5855d49a66bd04703a5a8c0a557841d8be86f5636ecac2f6974ae27b33f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 79 bytes.
- Source SHA-256 2dc324a387110e537cc4f06538edbc6208131843941da76182ceb3afc6883230; compiled object SHA-256 763b5b687d613c513cf1662ab4820a190c80b994f71b86aa8844c1f527027157; candidate object SHA-256 41dc8e58f185cea43a80a83496f934aa69be09e3eb0e6044a7a30222e4fad704.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
