# sub_000BFA20

- Manifest: lot 109, position 99; address order. Candidate span: 1 bytes (0x000BFA20 to exclusive end 0x000BFA21).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFA20; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAEDA0. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 7b5eab0354c219aa778245b82a8b7d4999bddd16fdaa4d1af08483a4fc021790; compiled object SHA-256 2c0371fc06f807106acebe08a372f3fb6bafd702c769d1b68a6ec349570b2f35; candidate object SHA-256 9b8ba5601ae875da0459fae145d90a09a820ee01b2c8b63973db1a1b455bcc95.
- GitHub Issue: #10193 (https://github.com/soldieg/ReBLACK-XBOX/issues/10193).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
