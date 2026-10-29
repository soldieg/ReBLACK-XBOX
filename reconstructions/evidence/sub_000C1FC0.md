# sub_000C1FC0

- Manifest: lot 111, position 22; address order. Candidate span: 15 bytes (0x000C1FC0 to exclusive end 0x000C1FCF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB1FC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB1340. REA read_bytes evidence ev_1170f83c433f4613954d883277e925781c638dfc0a34bea8c82e4d4ebc1890a7 returned 15 bytes. XBE raw = derived PE = split = REA; span SHA-256 73800589fbd88e7406d5067966c08322888a22bdfeaf3d84d9beb8d2130d9c47.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 15 bytes.
- Source SHA-256 550e0de455b4134e33f3fe7abca6dabc5770bae2f60de1e6a9bd05411dfd6e0c; compiled object SHA-256 bc3fdb20b12e922f30803e440ce8f0754bd064f8d0115692c33f1cfeba722ef6; candidate object SHA-256 5c61686e0094e03955bbec729310b34d5c11a5a9fd7b02627e3301033f9feb17.
- GitHub Issue: #10280 (https://github.com/soldieg/ReBLACK-XBOX/issues/10280).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
