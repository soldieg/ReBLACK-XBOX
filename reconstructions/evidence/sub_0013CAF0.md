# sub_0013CAF0

- Manifest: lot 120, position 60; address order. Candidate span: 1 bytes (0x0013CAF0 to exclusive end 0x0013CAF1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12CAF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12BE70. REA read_bytes evidence ev_fb80591062e823455a89b290c05afe1aef038c8a9aa7914edf23477ced76523e returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 4be888d517d0719c989728311301c0b2c38808a19263d43371507084a588818e; compiled object SHA-256 c0ec93fa63b64654a300db842fc0855c51ffef6056d8b0bf32ab19c9b257fe49; candidate object SHA-256 c972d26b33e5a16807969c84b7855385ecf09aaf80f705bfb64f35a671715c04.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
