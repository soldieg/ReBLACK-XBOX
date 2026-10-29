# sub_001B9AE0

- Manifest: lot 137, position 45; address order. Candidate span: 21 bytes (0x001B9AE0 to exclusive end 0x001B9AF5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A9AE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A8E60. REA read_bytes evidence ev_cc8c4b499207d240faacb5597c54dca72c0e337381ad9d1b55ee21c263951f87 returned 21 bytes. XBE raw = derived PE = split = REA; span SHA-256 6ed48945ffb547d1ec732b714249f059bfaed3138a9dddd073cf15f0fae53c06.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 21 bytes.
- Source SHA-256 a300f661ee378727ad9c6ffa13c74ee87e1f7c9aa73f974aa33bb371f56f0fd9; compiled object SHA-256 d2420d3116fb0caae4e14c83a098e5ce2c18cbb39a63ed4beecb2d31b4c2a657; candidate object SHA-256 d1b7cd0aceeaa67b384037f2d19d627ec18f9b461da775f18a3ae4b77b6befe7.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
