# sub_0017CAF0

- Manifest: lot 126, position 38; address order. Candidate span: 880 bytes (0x0017CAF0 to exclusive end 0x0017CE60).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x16CAF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x16BE70. REA read_bytes evidence ev_8b19f32851af720c23f4fc850b208000ee03ee60ad9d5395b9145d79c7181dca returned 880 bytes. XBE raw = derived PE = split = REA; span SHA-256 80a73975b8706112e2a4f387bb25a1003b728127e7b444b96bf76de6e1eb69b3.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 880 bytes.
- Source SHA-256 064366e64c27f9575118fca35af0ed2215db632cc12d3ad241e5cd7ec8621d7c; compiled object SHA-256 f980c3ea07942315d5c443f290ad0baaf5d4eaf6283b4c09d0c47130ba93515d; candidate object SHA-256 68be93f58919d69c22cae6cb81fa885d9d3aaab164640a8371cd111f8ca9574c.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
