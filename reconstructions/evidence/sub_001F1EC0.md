# sub_001F1EC0

- Manifest: lot 140, position 84; address order. Candidate span: 6 bytes (0x001F1EC0 to exclusive end 0x001F1EC6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E1EC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1240. REA read_bytes evidence ev_f88711d2d8d39213f8f0e79a05c57f9ae4cacb1c26d3b8c27cf48d6212aae97c returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 accecba762116532de10ac30681ff4b25ad91fe217568ec41c8ffd67b9ef2bcf.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 6dbebd2eb955d5420daf6dff73df3c65d99d82db0767d813da55c514fbdf4d1a; compiled object SHA-256 099864c4758d2ef34c57d9c9f4990b1daa8688d9c222dd256ea58347128ef18f; candidate object SHA-256 f70ae349a7221c685568cb64954543502aa77ea44e4b141f8a0e0bc75b86b3a0.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
