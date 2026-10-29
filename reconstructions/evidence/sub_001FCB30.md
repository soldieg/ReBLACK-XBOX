# sub_001FCB30

- Manifest: lot 144, position 12; address order. Candidate span: 167 bytes (0x001FCB30 to exclusive end 0x001FCBD7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ECB30; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1EBEB0. REA read_bytes evidence ev_c69fa923cc53252b8da6413a2c84f6c970a7ba43b07d1477f64b01fc6c0701fc returned 167 bytes. XBE raw = derived PE = split = REA; span SHA-256 88a83325e7a4e668fbcdcc058e0b4c289fb9bc1a536d11fed9bc50eb8a55e68d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 167 bytes.
- Source SHA-256 bf23cb811d9a1e2ef396f9b3967a8c01c479b0d19962ed4e130d438c5ae9f2bd; compiled object SHA-256 eb8db6a6c3e3c22cc6b55a6976058b96c110a64f60c311ad6b218de3e82af66f; candidate object SHA-256 978e91e6e593895f31451984eeebb19f6ae12b2da361cca74f436ad078bc6d43.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
