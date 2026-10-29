# sub_0011DDA0

- Manifest: lot 118, position 33; address order. Candidate span: 277 bytes (0x0011DDA0 to exclusive end 0x0011DEB5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x10DDA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x10D120. REA read_bytes evidence ev_0e6501697fbdf19165d3d8540ee072ca5a81cfee8f3a661dea88fe6bcdcb70ee returned 277 bytes. XBE raw = derived PE = split = REA; span SHA-256 dabd397b7b986f9a6326f1b353637b5b9dd2161619b3972e964f69f65804c384.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 277 bytes.
- Source SHA-256 c0e6046d6502e7ad78313d396dfc0c9050131bd37e68b2138a99ebab2261b935; compiled object SHA-256 b14983f97fd2206dfd165691499ab68e50899b7db01b8dea4febdaa4da7f1e74; candidate object SHA-256 49d9848de9d53b17e970f3203e1c468f1873db4c4e33f8903add91f34e29e150.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
