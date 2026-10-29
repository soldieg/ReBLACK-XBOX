# sub_000BEF30

- Manifest: lot 109, position 44; address order. Candidate span: 6 bytes (0x000BEF30 to exclusive end 0x000BEF36).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEF30; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE2B0. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 810f452af4f158ed7fa8e42721bcfad1c77eca73f39aa592913665e30221258b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 85342125f27c75604b963c01e7b4d829c2c5b5cbaebd3f050bac2e952eb9e3f5; compiled object SHA-256 b1b176d0e666e3b1daf28a60981b8eb46d38bc8f5c33750fd6d377cc5281b51b; candidate object SHA-256 9266c3c98acfe142eb13308ea5a10be14877a94ab2e63d6ca22fd68cfcc789df.
- GitHub Issue: #10147 (https://github.com/soldieg/ReBLACK-XBOX/issues/10147).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
