# sub_001D5DF0

- Manifest: lot 139, position 68; address order. Candidate span: 16 bytes (0x001D5DF0 to exclusive end 0x001D5E00).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1C5DF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1C5170. REA read_bytes evidence ev_1dc8b220f213b65df0cfa3ff7c26d29ef7287e6326c719cd0c23be0574567830 returned 16 bytes. XBE raw = derived PE = split = REA; span SHA-256 a5053a54a77331e45fa0af099cc121f77dc7d31acfc41116faa9fbe18465c757.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 16 bytes.
- Source SHA-256 a96c694b32e85175fac73f1057e051344e5b902b6d5ee82599d8c37ad9ff7f46; compiled object SHA-256 10b08798d6cb2ff975486b2bf959ff567c73543d87de5d2915f1dfc197c26ec5; candidate object SHA-256 c9bf066e823b81d004710ad42a3ad25698053c4bc055a73eb9c9f998df1ab9fd.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
