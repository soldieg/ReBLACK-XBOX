# sub_000BE5C0

- Manifest: lot 109, position 1; address order. Candidate span: 12 bytes (0x000BE5C0 to exclusive end 0x000BE5CC).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAE5C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAD940. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 12 bytes. XBE raw = derived PE = split = REA; span SHA-256 14314e8c30e59620b875491bbec9c6f2b175cf728385110f57dd7b6846bdc464.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 12 bytes.
- Source SHA-256 b6b783278009096d10e68421f09bd31dc99f50efc0b05223a442badec406f0c3; compiled object SHA-256 0d0c5be31501e78b240b60223dd103df1db7e21a35375f4a8ab956d87b64dcc2; candidate object SHA-256 bee86f350d14a3c361a63696bcf23951b7824088ff1e710cd33a5e1ab1c49b93.
- GitHub Issue: #10115 (https://github.com/soldieg/ReBLACK-XBOX/issues/10115).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
