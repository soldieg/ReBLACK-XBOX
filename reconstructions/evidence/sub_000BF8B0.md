# sub_000BF8B0

- Manifest: lot 109, position 88; address order. Candidate span: 69 bytes (0x000BF8B0 to exclusive end 0x000BF8F5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF8B0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAEC30. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 69 bytes. XBE raw = derived PE = split = REA; span SHA-256 a7297cc6299290768ce2b3d19a7b6549d2e4f1dadb165b68e1a465a80631b6c3.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 69 bytes.
- Source SHA-256 a57635bf2c33af922e66d45cbf7914d3ad41648112ee90d0c996a8d7a3043913; compiled object SHA-256 4fba26d9c730c82a6b5426b7ca1a796f3be3651f5efb1a6c04636aa4ac5cdf6c; candidate object SHA-256 e4bcb7a670ddf15513a1c638e346809da5af1214352a589fd879326ddc8be863.
- GitHub Issue: #10184 (https://github.com/soldieg/ReBLACK-XBOX/issues/10184).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
