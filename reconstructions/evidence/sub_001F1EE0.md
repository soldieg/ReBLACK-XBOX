# sub_001F1EE0

- Manifest: lot 140, position 86; address order. Candidate span: 10 bytes (0x001F1EE0 to exclusive end 0x001F1EEA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E1EE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1260. REA read_bytes evidence ev_016c5578ed1952eabc28f2f2fc23d73b9c6350d9837906cb906b43dfe0eb2667 returned 10 bytes. XBE raw = derived PE = split = REA; span SHA-256 35c7f45247cf3755c68647f52735214c57e018fd13813c846e55a6494728df6b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 10 bytes.
- Source SHA-256 f3c248e4e09a40c669c75636c1bf809c37dedc451fa4e22cb6b44b605573f0b9; compiled object SHA-256 158ccd283279511245fc0f7f7a21c2896f3df3ee6570eaea4c256d00cc67482d; candidate object SHA-256 afe5dac02b604cdb78ded40f32cd5422856af214a1e7eb89795f94c56355a615.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
