# sub_0005FFFF

- Manifest: lot 104, position 20; address order. Candidate span: 406 bytes (0x0005FFFF to exclusive end 0x00060195).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x4FFFF; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x4F37F. REA read_bytes evidence ev_41e453980d017062d608a7536b270bd6a72dfc5f3019c1c7f17cbce40ab5a09e returned 406 bytes. XBE raw = derived PE = split = REA; span SHA-256 e0610c251c5fc8d84005101fa5abed56fc12312d55605186b443a19b3394388f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 406 bytes.
- Source SHA-256 0f3115418fc8b1dbdba94eca852bff9dd1c06b598e3acf51f38f3782d794c03f; compiled object SHA-256 b3ebd5b22ea6929a831d2d46784be45e695c294cbec330af051a2f53fece9886; candidate object SHA-256 632a932bb386c446ee1ed91a5e2bd48cbb8aa34b1e9e1d771e863e812acf047e.
- GitHub Issue: #9688 (https://github.com/soldieg/ReBLACK-XBOX/issues/9688).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
