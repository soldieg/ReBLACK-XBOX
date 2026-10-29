# sub_000A3DD0

- Manifest: lot 106, position 13; address order. Candidate span: 7 bytes (0x000A3DD0 to exclusive end 0x000A3DD7).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x93DD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x93150. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 7 bytes. XBE raw = derived PE = split = REA; span SHA-256 a485aa6d5eda4dfbd126c3d0fc231f25f4edfdfe999f74dd8ee8d90956a67b5b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 7 bytes.
- Source SHA-256 f167266cb8cff851915ecce503c09b6a54aa6a4e3d1b97022d28f9f3583a0c6f; compiled object SHA-256 9c2fa4d0402b3e808dac237989471aa847232e0bdb7f92aca519008afda1c879; candidate object SHA-256 d5258d27590c6acf2ac5c229bfd70439e5914405724b97b44e0edc16498c53df.
- GitHub Issue: #9847 (https://github.com/soldieg/ReBLACK-XBOX/issues/9847).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
