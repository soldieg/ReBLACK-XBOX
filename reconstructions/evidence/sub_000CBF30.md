# sub_000CBF30

- Manifest: lot 112, position 18; address order. Candidate span: 8 bytes (0x000CBF30 to exclusive end 0x000CBF38).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xBBF30; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xBB2B0. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 8 bytes. XBE raw = derived PE = split = REA; span SHA-256 741bb4a95af3d604ddc169224bb698180470b719688a94ea02f0fff997799ecd.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 8 bytes.
- Source SHA-256 9783c2fdd23c64200eb38b0b704180cd329e1105b72e50df850efb93b70a9f03; compiled object SHA-256 7c2bbb5cbe3a1d7bff4504974a5d117528ed65dd73a6c38295d1c15dbe61a8ca; candidate object SHA-256 60866ecb62f04b28300d1cc13b8399aa9c5c1c89cfe3a712399f69f389d60e3e.
- GitHub Issue: #10354 (https://github.com/soldieg/ReBLACK-XBOX/issues/10354).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
