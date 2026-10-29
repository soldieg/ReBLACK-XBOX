# sub_001F2FD0

- Manifest: lot 142, position 13; address order. Candidate span: 7 bytes (0x001F2FD0 to exclusive end 0x001F2FD7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2FD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E2350. REA read_bytes evidence ev_17b4f691e5b987c1475491e6154336a0807ff095badb7f70866341a07594479c returned 7 bytes. XBE raw = derived PE = split = REA; span SHA-256 f538f2dadad5b02fc8f1cd0e21857d362f16224d5b925cc8917336f79e278bcf.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 7 bytes.
- Source SHA-256 22ea5d08f6a3c27fea015967640af604e79dcf7f05a62240aeb0f134166ae5bc; compiled object SHA-256 f85d3ecb1a5c7da4422b6ea76f1710d553e2b88c33b314540e31461981ef48b6; candidate object SHA-256 a368f22e9ef3e2188aebb013a10ed5b02e5562a7d02820fbe6eb1b96a5811a88.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
