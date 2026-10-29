# sub_000AD1D0

- Manifest: lot 107, position 6; address order. Candidate span: 23 bytes (0x000AD1D0 to exclusive end 0x000AD1E7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9D1D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9C550. REA read_bytes evidence ev_9f795c6c7542f557c322958dcddf5bb2e3212efd64f1d57abb9c388a4d3a989d returned 23 bytes. XBE raw = derived PE = split = REA; span SHA-256 2727056aad117814c7a3d5b9f980cfd824954c14f729c266ba55cbc0488e43fc.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 23 bytes.
- Source SHA-256 aec8185417b76eb5621dbcf9704117d3e82439b57124ce6cbe223f2f90577b97; compiled object SHA-256 9d294f7a39fd5b590cb1ad0aea41253a7cd3a03074a565be42cf0dd82b9b4535; candidate object SHA-256 3141aaceb8a58eceb7f4c15d690c808a2b4cc5cb19b08f87782c22b789b730f6.
- GitHub Issue: #9935 (https://github.com/soldieg/ReBLACK-XBOX/issues/9935).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
