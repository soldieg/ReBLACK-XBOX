# sub_001F1ED0

- Manifest: lot 140, position 85; address order. Candidate span: 11 bytes (0x001F1ED0 to exclusive end 0x001F1EDB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E1ED0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1250. REA read_bytes evidence ev_3ca95a7ad4d991488835abdd1961bbaac51dfa99059a4d311f425182305c1d76 returned 11 bytes. XBE raw = derived PE = split = REA; span SHA-256 c7cd2968a4e65996f767bd75abd0a900da52b510dc8326507da7007c63370671.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 11 bytes.
- Source SHA-256 55ae86d496f97c61a41c0bc850eb895fd5bcf10221e34db6972d217b761cdce6; compiled object SHA-256 9a9e27ee748ff8694a5624e7e75593d679fb21f9424aea8dbf0fd458d9ad875a; candidate object SHA-256 260ae9c603bba934aa3ef01aafea0bf0c4ec01c10dd4f3458b37a4b0ae31ec5d.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
