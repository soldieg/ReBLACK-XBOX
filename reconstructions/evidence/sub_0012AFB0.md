# sub_0012AFB0

- Manifest: lot 119, position 85; address order. Candidate span: 21 bytes (0x0012AFB0 to exclusive end 0x0012AFC5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x11AFB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x11A330. REA read_bytes evidence ev_99c23a3968071feccc31482e3292364e447427e3dad1f2b493a2112e3457ca5b returned 21 bytes. XBE raw = derived PE = split = REA; span SHA-256 e4392dddc28702ab26d4fb4baf31f48b69f5aee3685626ba565be6aaf097c099.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 21 bytes.
- Source SHA-256 5270e8693a77654ffec14973d07b3c002eaa7aca05401f1eaef31c655f658e63; compiled object SHA-256 999cda8560cba214e1517dc8a2cbb3f914613771ad89576219ab51330fd9b9b8; candidate object SHA-256 fffbebd70b5f8ad61ebc27ad1413f4623fa12c0c9ae56b14ca80c879e1763d7a.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
