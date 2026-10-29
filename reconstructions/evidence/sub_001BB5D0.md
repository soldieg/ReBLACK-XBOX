# sub_001BB5D0

- Manifest: lot 137, position 99; address order. Candidate span: 13 bytes (0x001BB5D0 to exclusive end 0x001BB5DD).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AB5D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AA950. REA read_bytes evidence ev_80ec3d6ed5e7bce8b950d7e5b3546627df26e33d906dbac857533c29c29ce4ba returned 13 bytes. XBE raw = derived PE = split = REA; span SHA-256 7fd73edf5a5e2e02d287568c48f711e269e5cf3dcc7fbdbd089c880e159c1616.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 13 bytes.
- Source SHA-256 0e307062b1d4c523d6278728bb698e9786e6c40d5182b2a1c42d1b3918bef447; compiled object SHA-256 0ca5cbc11f569d93667f44881196c638cf8a7330648d631dc89400813c89df6a; candidate object SHA-256 517caeabe7ced91feca986358046805d3c5c5e6c6f64f053d37f899fcdd41e53.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
