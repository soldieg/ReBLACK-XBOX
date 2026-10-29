# sub_000BF0F0

- Manifest: lot 109, position 50; address order. Candidate span: 5 bytes (0x000BF0F0 to exclusive end 0x000BF0F5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF0F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE470. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 5 bytes. XBE raw = derived PE = split = REA; span SHA-256 78314e677cea2cdaeb2be2e3e194bb8c94823591c8d21534a29d5d6bf419561c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 5 bytes.
- Source SHA-256 0d0f0b337f86b10b6b29ebbb074b0f9b75756b10be1b523b884a339ebb59aa64; compiled object SHA-256 a101db9844e24bcf45b1dedcbcf02a6b6b8071fc66779743154b3235f4b1e605; candidate object SHA-256 1a3fc3c0ffe103e8126592b31797ed42df8c1e5bb3be9d298ab7784d8c772f99.
- GitHub Issue: #10151 (https://github.com/soldieg/ReBLACK-XBOX/issues/10151).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
