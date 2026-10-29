# sub_000ACB90

- Manifest: lot 107, position 2; address order. Candidate span: 124 bytes (0x000ACB90 to exclusive end 0x000ACC0C).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9CB90; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9BF10. REA read_bytes evidence ev_9f795c6c7542f557c322958dcddf5bb2e3212efd64f1d57abb9c388a4d3a989d returned 124 bytes. XBE raw = derived PE = split = REA; span SHA-256 0278a35353d0af1c0b2902921d671ded16e93d173ccc491967c00beb74ba22ce.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 124 bytes.
- Source SHA-256 638399b646e24d8665ecd00e8e7046227643210d8bc8a4578973ba95fb14be32; compiled object SHA-256 54450d4bd9308b10815fcd0a87c1a9c5df4c511b222ffc75b1a12641fffe056c; candidate object SHA-256 12d71a48f454c3c882179e9bed0fc93b54551ee64a0bc1160c693044c507434a.
- GitHub Issue: #9929 (https://github.com/soldieg/ReBLACK-XBOX/issues/9929).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
