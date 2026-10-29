# sub_000FBB40

- Manifest: lot 115, position 36; address order. Candidate span: 885 bytes (0x000FBB40 to exclusive end 0x000FBEB5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xEBB40; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xEAEC0. REA read_bytes evidence ev_f257e33934f7baa6f3e0390cf8a3a49a3ae042453bc50fe6ad4cddca37330d1a returned 885 bytes. XBE raw = derived PE = split = REA; span SHA-256 06966a3cb2435d93e904042ac479ff3887b37ff5fbb638b668aeb21bbc170e2d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 885 bytes.
- Source SHA-256 8e7cc7b8f15bc82ddb6485711b3224a6acd10debcb460f657bf0b4fbc73feda1; compiled object SHA-256 98ef698bbd733877cbea296372644c20fbf88216411613f041b684faea29ff8f; candidate object SHA-256 6f3733a33cd0822a91570adedd932044436ac588674d2df121e19d5bb9576cbb.
- GitHub Issue pending: GitHub API returned HTTP 403 secondary rate limit.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
