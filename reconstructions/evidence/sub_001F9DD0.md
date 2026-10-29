# sub_001F9DD0

- Manifest: lot 143, position 94; address order. Candidate span: 49 bytes (0x001F9DD0 to exclusive end 0x001F9E01).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E9DD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E9150. REA read_bytes evidence ev_a85fd1735cb5019e2c2489db542e75527e13360c1fba0136f4b0efdd99aa8fc3 returned 49 bytes. XBE raw = derived PE = split = REA; span SHA-256 d02b164e6e083d57e27b71f476593c8e122796392a603c151682af8888057195.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 49 bytes.
- Source SHA-256 10683e17b33f1cf99225b2d12e1cced2403d5af9c8e7742e2ef76da3e7ebb537; compiled object SHA-256 e0d0fe1431934d72cc5cea9914646d35fed7c3ebb8af90e4d5f7a4bb2d052b51; candidate object SHA-256 182a6ed98fe8c2b800924e7d4bb83f43c86f78ea95136a5ede09d62fc8a66219.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
