# sub_000A82CF

- Manifest: lot 106, position 37; address order. Candidate span: 3 bytes (0x000A82CF to exclusive end 0x000A82D2).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x982CF; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9764F. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 b0f751a22f9b1c30c903d25f5a91638e0aa8911a27e7138a5091739563f0f778.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 d10fd73436fff86b662d9ebdc21269b8a478992cfd70b18b36a30c7daa6b053d; compiled object SHA-256 ec256b34074432b2da53e51a9f1a7512636ece8bc1e4f785ce5858a0f95cf935; candidate object SHA-256 b9f17a9313eb009f63eb35e9bc4ba062fe82a001b33740ba4729c3dc1d7e191d.
- GitHub Issue: #9869 (https://github.com/soldieg/ReBLACK-XBOX/issues/9869).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
