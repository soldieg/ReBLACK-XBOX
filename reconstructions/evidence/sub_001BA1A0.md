# sub_001BA1A0

- Manifest: lot 137, position 78; address order. Candidate span: 74 bytes (0x001BA1A0 to exclusive end 0x001BA1EA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AA1A0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A9520. REA read_bytes evidence ev_2b4747ea4f54f3cf5d8e173504c66c463637e6ea6797c2709e5343e5f39bd481 returned 74 bytes. XBE raw = derived PE = split = REA; span SHA-256 d7e7e08aeb654660df510f6a0861c0a0ea4a398213b6732fa9ed6cb832613b3f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 74 bytes.
- Source SHA-256 38207b31723a1496a64fb5a733bdd95de93da107d14dfd16076bc21ade9f2383; compiled object SHA-256 c7791ebfecd3cbc03c88a001af7ab5cae8b9dd2bcd9d584704f7bb78f3eb999c; candidate object SHA-256 0c72dc9b8b8d2f1fd07b6f8f1ca889af0a59388222a111e8d2f06292b414e0e7.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
