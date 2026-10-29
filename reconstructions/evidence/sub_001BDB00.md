# sub_001BDB00

- Manifest: lot 138, position 38; address order. Candidate span: 25 bytes (0x001BDB00 to exclusive end 0x001BDB19).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ADB00; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1ACE80. REA read_bytes evidence ev_297fcf65a4283b31ca7af5e396513c0fe3d622d8829680adbeac1c25ae551be4 returned 25 bytes. XBE raw = derived PE = split = REA; span SHA-256 4ec060c8a2c8fb0c03fe2c04edc0e12aecc6465deab0d27ae1166e9ff0dd954b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 25 bytes.
- Source SHA-256 37e3c4bddac563ceb07a2d92e61d33c33506d29de00983b23468dbd23188b3f8; compiled object SHA-256 903db5a68aa5b7623ae682b3312a0ed6b494a6e2d18829d278ee44614087ed43; candidate object SHA-256 81eef4d3a4047187008621994e210b33a0a33e4f7eb156e086824e4c1b8dd706.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
