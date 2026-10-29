# sub_001F1AC0

- Manifest: lot 140, position 55; address order. Candidate span: 1 bytes (0x001F1AC0 to exclusive end 0x001F1AC1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E1AC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E0E40. REA read_bytes evidence ev_587b54eb02e79c7509d0ed35928875035167616f766de1ab93693bbdb6d9804b returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 59f2f7d688a4b19990e4e1b9e8ea4c45aafd2a153eb94d71ec2177fedc18b391; compiled object SHA-256 61e4d7cba02ab0293bda23b10777226336c21b5ad67fed02017dc6eff7341b78; candidate object SHA-256 0077dad36f1bef556d39b91377089907b3287e4f843e7d91ed8ca874cd2f1519.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
