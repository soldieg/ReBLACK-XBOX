# sub_000DBC60

- Manifest: lot 112, position 88; address order. Candidate span: 17 bytes (0x000DBC60 to exclusive end 0x000DBC71).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xCBC60; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xCAFE0. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 17 bytes. XBE raw = derived PE = split = REA; span SHA-256 598ebf189e9e848e462e1a90d5adcf9ea15902084a0ca3c78e10fde296862aa0.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 17 bytes.
- Source SHA-256 19f61e0b7d3c096cd1c16fb277e504e4877d70126aa807732b787d0d4c965fe2; compiled object SHA-256 5cddeeb29e3ad29d04a04e231e0f316bb2ea4b33f7ee4b88c172570b7d905d5e; candidate object SHA-256 4a9d297a9f4e6737b263c4bd40a1ccc04f4c5527d92346eb12f8498131c4505c.
- GitHub Issue: #10410 (https://github.com/soldieg/ReBLACK-XBOX/issues/10410).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
