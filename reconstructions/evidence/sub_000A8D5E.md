# sub_000A8D5E

- Manifest: lot 106, position 55; address order. Candidate span: 132 bytes (0x000A8D5E to exclusive end 0x000A8DE2).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 2 incoming call sites; callers: 000a46c1@000a45f1;000aaa91@000aa9bb. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x98D5E; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x980DE. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 132 bytes. XBE raw = derived PE = split = REA; span SHA-256 87793c8f4e6b096d7636041a4678f828c547ac1f74465c405218fcccd367b5c9.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 132 bytes.
- Source SHA-256 9a079d5ba52dbeea6f0b80347890b4c81af1e7a41ab4f96fed0ab605222c7226; compiled object SHA-256 4a22ab84f990bd06a39e3eb23b600f5fd79c9429c2be90a54d0636940552dc69; candidate object SHA-256 2493f097c4e11f743b67f30e799dee5749d49d0398695ae336a817f256ff1b9f.
- GitHub Issue: #9882 (https://github.com/soldieg/ReBLACK-XBOX/issues/9882).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
