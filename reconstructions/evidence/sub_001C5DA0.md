# sub_001C5DA0

- Manifest: lot 138, position 96; address order. Candidate span: 28 bytes (0x001C5DA0 to exclusive end 0x001C5DBC).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1B5DA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1B5120. REA read_bytes evidence ev_1272c8efbf66859e0961021b37ea0f9029e2a1b2c3dbc1beed01e7f0490c540a returned 28 bytes. XBE raw = derived PE = split = REA; span SHA-256 796a998edb2161cf1625c232c48f6b4edecc569196fcdcd795bdf624931fdb3b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 28 bytes.
- Source SHA-256 d7dea5268956fbef3f11a6671869dbdf6e41107a8fffb8d7d2dd1a0658842df7; compiled object SHA-256 1d782c45bff8d03282f73149f5853f448df7311cb451ab13562decc7dd44a2d8; candidate object SHA-256 802616a2ced132b50d45d081d566582a3aa4e4a6be0e776e9018fbd7fe0cb63f.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
