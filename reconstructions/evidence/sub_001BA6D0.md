# sub_001BA6D0

- Manifest: lot 137, position 91; address order. Candidate span: 57 bytes (0x001BA6D0 to exclusive end 0x001BA709).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AA6D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A9A50. REA read_bytes evidence ev_97894745e4f51ba25570beb349c42b16e5cf033f1ef827d0800ba080509f4e8b returned 57 bytes. XBE raw = derived PE = split = REA; span SHA-256 005238ddbb4223e757baaa0ddb2c4a1fd0dcf0c1d59a4e28045045ffd15beabc.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 57 bytes.
- Source SHA-256 df5251ea53e046711c93d6ae27508fa132dbdf2cea73d9d54539aea3ca153025; compiled object SHA-256 d9f20065dfae818bd1573339fc57842b1f6e75cd27a052881a6eca94a0910a83; candidate object SHA-256 a536fe4b132ae484e22157d9fa1e1d2a8d4c2a94ad08283a447b61aec468894e.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
