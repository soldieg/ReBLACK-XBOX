# sub_000A9EE4

- Manifest: lot 106, position 67; address order. Candidate span: 3 bytes (0x000A9EE4 to exclusive end 0x000A9EE7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x99EE4; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x99264. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 350035d67bbad9ded6aeca4542efd660ac807e838bc409c091a6749844eb401b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 9b524e5079c4476b16d4d11975b3dd04ebb3ccd98fb93d776e15ab863a9ff7cc; compiled object SHA-256 460681ef9ae271e7cbd6e2d91e14f5bf20e1282798074391d29e2b6e00f4ac6c; candidate object SHA-256 502ebc3362b3a9c4dffc07963c763ca8a07cf200faac7886b94b7e18804569b2.
- GitHub Issue: #9895 (https://github.com/soldieg/ReBLACK-XBOX/issues/9895).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
