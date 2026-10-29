# sub_000BF3D0

- Manifest: lot 109, position 68; address order. Candidate span: 15 bytes (0x000BF3D0 to exclusive end 0x000BF3DF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF3D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE750. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 15 bytes. XBE raw = derived PE = split = REA; span SHA-256 cf3912414e3fafb23e6e5aa414c21943ac6232d505ff97005ef4453f3ce2746d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 15 bytes.
- Source SHA-256 94781c9e6799442ff7e411b3f90ccdacff32a30c2c12a5d584e34fe621cdd594; compiled object SHA-256 30ac1e102974c7ab2d2312e700185cf149a9b70f65bdb72f09f0b07d30ad46ac; candidate object SHA-256 523ab636c0ba209c4d6091c7cad72d2f4bdc4ee92b850bf4d8b4971dc787fda6.
- GitHub Issue: #10165 (https://github.com/soldieg/ReBLACK-XBOX/issues/10165).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
