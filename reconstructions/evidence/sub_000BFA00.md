# sub_000BFA00

- Manifest: lot 109, position 97; address order. Candidate span: 15 bytes (0x000BFA00 to exclusive end 0x000BFA0F).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFA00; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAED80. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 15 bytes. XBE raw = derived PE = split = REA; span SHA-256 7e8b1902a27e0c3f48a19b7fbbd21f3cb4a32489f0d4d36d4fd42ead0d252a85.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 15 bytes.
- Source SHA-256 ae0d89d27fbb829fabd6f023838a8ac5b59f417dd4cf9d0670c6458186e2ead0; compiled object SHA-256 6363d45a4daec258c51489740fcb8cc7e077110a603808fa580da97bed75a541; candidate object SHA-256 3ac98f18c8f4a9b51b830c83b74542b573471a87ae8e495d203e2b9c3f715ff2.
- GitHub Issue: #10191 (https://github.com/soldieg/ReBLACK-XBOX/issues/10191).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
