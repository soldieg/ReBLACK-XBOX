# sub_000A6BCC

- Manifest: lot 106, position 22; address order. Candidate span: 49 bytes (0x000A6BCC to exclusive end 0x000A6BFD).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x96BCC; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x95F4C. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 49 bytes. XBE raw = derived PE = split = REA; span SHA-256 9e522a17fd24564e947d962f74d9c7204b4d0e0c209bf84845fb248d3b0760d1.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 49 bytes.
- Source SHA-256 6c0068cef024f35525bdd42ef0ea4e74e263a353e65618fee79c4deb741edd0a; compiled object SHA-256 64617ad3fa8cf26dea6cbfb670518aa5d2dcf30d3f455df848a395be6a6af5f2; candidate object SHA-256 f8b8a451e0080488b8810d16b5c8761185f3f0159e010f13c9785d5ac923e670.
- GitHub Issue: #9855 (https://github.com/soldieg/ReBLACK-XBOX/issues/9855).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
