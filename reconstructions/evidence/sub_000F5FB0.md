# sub_000F5FB0

- Manifest: lot 115, position 5; address order. Candidate span: 165 bytes (0x000F5FB0 to exclusive end 0x000F6055).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xE5FB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xE5330. REA read_bytes evidence ev_c3dea3da84a0f6508a0aef4ebb0f4c2904a094c6fc22a75760e4e6e8f90bca87 returned 165 bytes. XBE raw = derived PE = split = REA; span SHA-256 e174000bbfac4d10cd0ab6cc95d5c4a95d12d0f18223d576629c9ef5f9fa5cb8.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 165 bytes.
- Source SHA-256 3c93f9f4faa3e9b80f81c70e0bed8fb2973f0303d5ae4e2bbde1c1ad0f2074f7; compiled object SHA-256 3c158c0622db462854fdc51a2f2786562a8702d51432e08b91696c3007e878db; candidate object SHA-256 80f7a55066b464dd93fc477f3f226c6cc9f22f06e49d7459074a922b1ae57b98.
- GitHub Issue: #10604 (https://github.com/soldieg/ReBLACK-XBOX/issues/10604).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
