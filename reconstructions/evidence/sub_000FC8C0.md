# sub_000FC8C0

- Manifest: lot 115, position 41; address order. Candidate span: 122 bytes (0x000FC8C0 to exclusive end 0x000FC93A).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xEC8C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xEBC40. REA read_bytes evidence ev_2d679ccb8d84d1f947a82caf812b21278f6fdb5c20837d470cdcf66a80f27c3a returned 122 bytes. XBE raw = derived PE = split = REA; span SHA-256 2eb5bcf12784f37945b201edaa975dd0bb082f1c121d327271396b1b0cbc0725.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 122 bytes.
- Source SHA-256 e8a29b000fd4065b27cc5cd95cc67c272ce69046bd26253a8c18fdc0081ba62d; compiled object SHA-256 a03e9fa8e3a904a7f86ad242693237ab1dd0b926c0e02597b1b99af5fceed780; candidate object SHA-256 becfd4fb652d3ede9cbd1566a3a889720d9c1b0c59dfc4cd698e5968a763c3f6.
- GitHub Issue: #5931 (https://github.com/soldieg/ReBLACK-XBOX/issues/5931).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
