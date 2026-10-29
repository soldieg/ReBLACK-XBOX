# sub_001B4BF0

- Manifest: lot 134, position 64; address order. Candidate span: 21 bytes (0x001B4BF0 to exclusive end 0x001B4C05).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A4BF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A3F70. REA read_bytes evidence ev_35035b68fbd6fa056696de0870819d612b0459ef113f422f5e9fa87a3d00223e returned 21 bytes. XBE raw = derived PE = split = REA; span SHA-256 6ed48945ffb547d1ec732b714249f059bfaed3138a9dddd073cf15f0fae53c06.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 21 bytes.
- Source SHA-256 d9f9388607e22833d881e0a4f47192945519958b12d139a35d3b825730117d9c; compiled object SHA-256 97832f7efaad000a822fb14e1240280c68048fd2e50d41998a45bab5bdad9c33; candidate object SHA-256 0fb4be9a7439e2884c1d4f1ecb5a1556d962855d7c502ee220ef1b65945924f7.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
