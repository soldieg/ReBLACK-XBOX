# sub_001F5AE0

- Manifest: lot 143, position 28; address order. Candidate span: 3 bytes (0x001F5AE0 to exclusive end 0x001F5AE3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E5AE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E4E60. REA read_bytes evidence ev_2873841822ad4d5eb57f28b36119c3a1b73f2dd0905224852c6195ed0f94d0be returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 01cb47d078b4841b8408ec4fe278efa83115c6f6e101972987507d2b2b57dcf0.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 621563514facf28ba7fa582b83f191cedd8d6cbdfc83bd14eaddca3149b7aff7; compiled object SHA-256 8c0ab50f1117a629cdf1a4c9881929ba03d0ba43699aa9108532a5df21e2ab91; candidate object SHA-256 2524479f1821ba95a41d99a21e34eae728eda97f8a57c5b6348f6b6dfab9a351.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
