# sub_001FCA50

- Manifest: lot 144, position 7; address order. Candidate span: 11 bytes (0x001FCA50 to exclusive end 0x001FCA5B).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ECA50; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1EBDD0. REA read_bytes evidence ev_6ee0a3278598f9c29283a0f0d968ed2ff44a7eed1f9e5636e14ff0ec3e1123c1 returned 11 bytes. XBE raw = derived PE = split = REA; span SHA-256 cef2c200c27e867194b36737b7dd5e139acff38de58230c41db54cb5e20455b8.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 11 bytes.
- Source SHA-256 0ab3bd83c1c5c745b551d390e8f6b8f1febc7a9afceb936917fcd60eecb88869; compiled object SHA-256 31d8b17f41866fbfbc7856a1db56f81cdb41b98b728537cdbf589739471ae328; candidate object SHA-256 391eca8a87d7551e15e335784da01fbc7bf94d4e2e647f60b9e91f2242544775.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
