# sub_0018AFE0

- Manifest: lot 132, position 16; address order. Candidate span: 20 bytes (0x0018AFE0 to exclusive end 0x0018AFF4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x17AFE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x17A360. REA read_bytes evidence ev_964c2ecc2cec730d951925d03a3e9d178246da7382a389cf29050a6af71fa185 returned 20 bytes. XBE raw = derived PE = split = REA; span SHA-256 70b4ad73639bbb42567760b05c4acd7d69a9023dfc3790cf8623b1f99d0332c6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 20 bytes.
- Source SHA-256 6de21ecdc3a4d5bbf9a9f8111eb5ec764ae32cbad0515c84771df6ee45d8ea82; compiled object SHA-256 3f9bed99f77dedeca3528fef7c5cdfc6702976fc490c1dcc01080381511f08e8; candidate object SHA-256 45373fe85cc30ffe89569490f963d337356c71713f247c47941d371630b6f8c4.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
