# sub_0008BBE0

- Manifest: lot 104, position 92; address order. Candidate span: 22 bytes (0x0008BBE0 to exclusive end 0x0008BBF6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x7BBE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x7AF60. REA read_bytes evidence ev_41e453980d017062d608a7536b270bd6a72dfc5f3019c1c7f17cbce40ab5a09e returned 22 bytes. XBE raw = derived PE = split = REA; span SHA-256 82d383a92c1db081f2f3cd81f0d6a3c26ed753a6b688e892f73566ce5280cf1b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 22 bytes.
- Source SHA-256 dd94b0177a81549abd9b2273944fb5e9249f6a7e4443d28255b2d19219caedb4; compiled object SHA-256 21b5b77913f8dbc38c69c3c1729f8f9df9373c3eb8b7f85806bbff30ca49772c; candidate object SHA-256 8bb39b74eba4f584cee6b6765c20ba0a8bd3f40ea82ffaa7ba28b2aa75900b2b.
- GitHub Issue: #9739 (https://github.com/soldieg/ReBLACK-XBOX/issues/9739).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
