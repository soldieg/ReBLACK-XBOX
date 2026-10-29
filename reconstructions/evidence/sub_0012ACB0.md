# sub_0012ACB0

- Manifest: lot 119, position 83; address order. Candidate span: 4 bytes (0x0012ACB0 to exclusive end 0x0012ACB4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x11ACB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x11A030. REA read_bytes evidence ev_a77bbf48110baf89838428a054d14ad8754a3f2c8d433600bcfc319bfb49da07 returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 1697b83898cd08616eea05084a50bbbc26049c0a6cbc3633694539e763c94483.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 93c631aef2532002ae46e5de49c583081ed0c5cc24ad72300c1996a01af13c4b; compiled object SHA-256 db0e5058a83602e2088a3a7fa0629f4bbbc384c4c33d01746504b5ec8923e270; candidate object SHA-256 a05394ebe92cd12ffb07c758687f06c00cb324476f83fcaf9c7cfbac6f6dabad.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
