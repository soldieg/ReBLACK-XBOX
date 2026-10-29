# sub_000E1DF0

- Manifest: lot 113, position 14; address order. Candidate span: 25 bytes (0x000E1DF0 to exclusive end 0x000E1E09).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD1DF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD1170. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 25 bytes. XBE raw = derived PE = split = REA; span SHA-256 4c238e422c4eac4a4b841e31fdd800ea98e2845b806f9e03c5b562f66ae711f6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 25 bytes.
- Source SHA-256 1a786be2a8232de764fa19aed552247936f6855cb5170ab18d659aab88684c1c; compiled object SHA-256 5e3b502d20b1bd8115abb52ad8c6b8a95de9a2844b5e2409bc0e60fd63e74a46; candidate object SHA-256 cd47fc01ca04eb70645ea38474ac6f6eac3da10e4ddb9e5ebe99e1a75cfb705e.
- GitHub Issue: #10428 (https://github.com/soldieg/ReBLACK-XBOX/issues/10428).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
