# sub_001FDF90

- Manifest: lot 144, position 14; address order. Candidate span: 48 bytes (0x001FDF90 to exclusive end 0x001FDFC0).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1EDF90; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1ED310. REA read_bytes evidence ev_60897cec87528e536360a14a5ff28cb6cff5b9ac424fa43bb746ed44678de7fc returned 48 bytes. XBE raw = derived PE = split = REA; span SHA-256 7e8a546fb738503d30c873dbae7acda6b39c7e81f8d8457723a990a2978b5b37.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 48 bytes.
- Source SHA-256 2f3ae94fcce3717bd8eb108e8ce4ecb3d3e3891993715961a6b2885162155bfc; compiled object SHA-256 e7323cdab59b40c1df55eeb13254ac5eb0ab4578b785f1d0c0a36cc73619eb9e; candidate object SHA-256 6733be472bab94c74713424ea64242b1e1c31b4a1dc312a63d87ddd1afe623eb.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
