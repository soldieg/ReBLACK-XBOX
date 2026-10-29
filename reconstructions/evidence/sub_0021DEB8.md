# sub_0021DEB8

- Manifest: lot 150, position 63; address order. Candidate span: 75 bytes (0x0021DEB8 to exclusive end 0x0021DF03).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x20DEF8; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x20D238. REA read_bytes evidence ev_8c8dcc8cd7b82b821cebc83b917d1b60a6c3ca5b25ab5d1a288520366ba5d192 returned 75 bytes. XBE raw = derived PE = split = REA; span SHA-256 cae1863d2bc6b6b37707626682885c87f2fe83d03f8c30daa1c245f1025b904a.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 75 bytes.
- Source SHA-256 9437417ce409fb2de4bbcdb0ec76376620ca8eadfa04800f21756fbddf850b8c; compiled object SHA-256 7ec35918d767ae6a762ff57e3d7345f2244225c34524782120402103c51b2c7b; candidate object SHA-256 6324757e33853e1f228333a9a87bd35671afdcda21d7d397a124212a5cb17c75.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
