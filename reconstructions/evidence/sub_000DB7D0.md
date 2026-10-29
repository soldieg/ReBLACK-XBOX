# sub_000DB7D0

- Manifest: lot 112, position 82; address order. Candidate span: 4 bytes (0x000DB7D0 to exclusive end 0x000DB7D4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xCB7D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xCAB50. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 a8f0fa418efe5c5bb945dfd175a1d743808bf003653f9f629826d478e6a995d0.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 e5ef08558b3ba8c70c8c2770e1168d58f059bdfe34ad80f3e0a0ad9c2b924df0; compiled object SHA-256 bb6e3bbb7e3fbb28d392a1a9d8622628dd5106327b1dd1f43200267c895ef026; candidate object SHA-256 5f31ec25ca6ebd613076db39ef641476ec72df3c00de3d6bc498129d2a00a84d.
- GitHub Issue: #10404 (https://github.com/soldieg/ReBLACK-XBOX/issues/10404).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
