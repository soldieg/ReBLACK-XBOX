# sub_001B5BC0

- Manifest: lot 135, position 57; address order. Candidate span: 8 bytes (0x001B5BC0 to exclusive end 0x001B5BC8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A5BC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A4F40. REA read_bytes evidence ev_e3d433b8883ff51c29f8e24a9106b5221bbcdb9ea87bbfc770930c83635cca98 returned 8 bytes. XBE raw = derived PE = split = REA; span SHA-256 b5b8ecd62b8b1ff3eee4e4b31fc265a89b76bdd9a827bbfbc90f8193f0ed4f01.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 8 bytes.
- Source SHA-256 bfe4d5ab686bb00bdbe23c20abdb68e526438632d1ac14fb9a2b0fa926a2ad55; compiled object SHA-256 7a16ad2db598e327057edf46f1c97c9f66e379204c0ca37988a981c97f4b0fbd; candidate object SHA-256 9fbc1c67a8893bb43372b205828c0becde14db8ed3cef70e231089cd64cf8f2e.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
