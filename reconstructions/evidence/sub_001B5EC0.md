# sub_001B5EC0

- Manifest: lot 135, position 75; address order. Candidate span: 3 bytes (0x001B5EC0 to exclusive end 0x001B5EC3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A5EC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A5240. REA read_bytes evidence ev_a0444d7899b019b70e6c04b26062cc3a61b41805bc12c275d6e3c8ec0b84caca returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 2140d555cfc32cc3e5cc2f2ad1b912461fdb9c4636223081b4e44ba6a8ea9e91; compiled object SHA-256 5d568219aa606a49daee09cf4be38963d2bf441cf8a886d57da92966d60bed0c; candidate object SHA-256 ad98f513f752dc5f3fe11aa764ee38ff92ef7ee938e133ec54b2c8c34302b9e7.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
