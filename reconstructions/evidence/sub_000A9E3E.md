# sub_000A9E3E

- Manifest: lot 106, position 65; address order. Candidate span: 3 bytes (0x000A9E3E to exclusive end 0x000A9E41).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x99E3E; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x991BE. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 b0f751a22f9b1c30c903d25f5a91638e0aa8911a27e7138a5091739563f0f778.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 ec8116d921def524d1971870c4690666889f566bee6541d7adc6cf5e12d81a31; compiled object SHA-256 55446e5660628c9d73ba338c01f4b9f0d62f667c2db15b192c2c46cc3ebcc412; candidate object SHA-256 5e2245b6496f7ae8b6de81ef8cc1b48d5cc217099dae0205344b254023c0dbd6.
- GitHub Issue: #9893 (https://github.com/soldieg/ReBLACK-XBOX/issues/9893).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
