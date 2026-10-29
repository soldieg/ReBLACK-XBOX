# sub_000C1AE0

- Manifest: lot 111, position 7; address order. Candidate span: 83 bytes (0x000C1AE0 to exclusive end 0x000C1B33).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB1AE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB0E60. REA read_bytes evidence ev_1170f83c433f4613954d883277e925781c638dfc0a34bea8c82e4d4ebc1890a7 returned 83 bytes. XBE raw = derived PE = split = REA; span SHA-256 1145b32fb3c4313163023ab33e0a66bdf8434b926d0789f488ba44ea8ab78959.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 83 bytes.
- Source SHA-256 533e78edb83c31895b4a53ae0d54e9a955de455f27b8371da636ffdc8be5d0e9; compiled object SHA-256 f1ce62f9ee7c7a0e9552edb19250bd4391f02bd1e8060ab010c9512f4ea16f22; candidate object SHA-256 d48f4416759fafe660adeb1a8846c45326ca38b92b446608b0306e6acc7a302b.
- GitHub Issue: #10271 (https://github.com/soldieg/ReBLACK-XBOX/issues/10271).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
