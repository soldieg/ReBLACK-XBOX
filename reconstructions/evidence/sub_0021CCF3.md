# sub_0021CCF3

- Manifest: lot 150, position 59; address order. Candidate span: 12 bytes (0x0021CCF3 to exclusive end 0x0021CCFF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x20CD33; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x20C073. REA read_bytes evidence ev_74f755f8f14dca7e99bdcd0eb79b592e14390764244b7f160628c27384344bff returned 12 bytes. XBE raw = derived PE = split = REA; span SHA-256 10a85d6249d6d95fadb16347ce83c7618f3e0b012a321bbdb391280201f9a3af.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 12 bytes.
- Source SHA-256 20e773af68eaaba61826b8fc86635c6b4ede3cc295fa57af658d716856009d0f; compiled object SHA-256 115b63aa5676cf2cfe361b1d71913d404703a692ea725756f8dbd73d1a270568; candidate object SHA-256 9ca75fcdbc373c96335629fae350c87818666a91137c5b2b665e9f8c0267d56f.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
