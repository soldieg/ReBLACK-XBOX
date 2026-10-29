# sub_001B5AE0

- Manifest: lot 135, position 48; address order. Candidate span: 3 bytes (0x001B5AE0 to exclusive end 0x001B5AE3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A5AE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A4E60. REA read_bytes evidence ev_39d5db457000b02399341ddb07fd0712a97bb748c6738b00ff37a01c2f80026b returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 6471fd5ecfcdef4287238663e1b37292cca96d36e96d5a01a370311567df2a17; compiled object SHA-256 e76847d2f40cd63a5125668891b5b90692f5ed54067ba179fc97ff89799d1f03; candidate object SHA-256 deadab9b26be4b30ccc8206e68583fc1ee80b7c585a224dfcd27e6183032f882.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
