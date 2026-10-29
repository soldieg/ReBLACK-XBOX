# sub_000AC6C0

- Manifest: lot 106, position 89; address order. Candidate span: 23 bytes (0x000AC6C0 to exclusive end 0x000AC6D7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9C6C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9BA40. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 23 bytes. XBE raw = derived PE = split = REA; span SHA-256 145ab65ad8fdaefedf605290edf33bfabdd449393ca383e04c15cb523be032f5.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 23 bytes.
- Source SHA-256 3d8b8a8a89d33546cf2207f70638b7ae70b7da4c663e20d1a3af1e7a90d9f8c1; compiled object SHA-256 891f3fd6b5cbc74ba3f1668ebd7d2d69d0765c270ff31ff37de775cc44e0b340; candidate object SHA-256 6a4c66f3655a18798f850054f2a739423a82f977fe0bafaef0fced9fd1c35709.
- GitHub Issue: #9918 (https://github.com/soldieg/ReBLACK-XBOX/issues/9918).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
