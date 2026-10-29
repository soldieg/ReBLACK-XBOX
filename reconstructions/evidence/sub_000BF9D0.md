# sub_000BF9D0

- Manifest: lot 109, position 94; address order. Candidate span: 5 bytes (0x000BF9D0 to exclusive end 0x000BF9D5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF9D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAED50. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 5 bytes. XBE raw = derived PE = split = REA; span SHA-256 a5876b62e857a39e55734ae7c9e7799a6b6c3f09c935b13f890535b296743c92.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 5 bytes.
- Source SHA-256 9ee8945c7e0fd235521cc4faea954649a792671539de63f67f92c7f64a9d1fb0; compiled object SHA-256 41478bf8f8594094e1a57b06c9ddc85ea6cf5fa34b693929720b92f0a2c5348c; candidate object SHA-256 9d0fcf5123cff877c5413861e63909424f2afe446ee9c9a6307b4b7d875890f6.
- GitHub Issue: #10189 (https://github.com/soldieg/ReBLACK-XBOX/issues/10189).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
