# sub_001F3FB0

- Manifest: lot 142, position 58; address order. Candidate span: 8 bytes (0x001F3FB0 to exclusive end 0x001F3FB8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E3FB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E3330. REA read_bytes evidence ev_83322e0b486cb1d2b68c52eec8c0c926374fe32fb798ca6be9c37ba3f6fc4eed returned 8 bytes. XBE raw = derived PE = split = REA; span SHA-256 ebd4e368cf76710bc6f8af7c3b8767d31ca1987570168e3602d6034ee3069ff5.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 8 bytes.
- Source SHA-256 5140151d0bc2b28e7efe75d3a6d6aa1274db871865df022c073bcd8606b4e287; compiled object SHA-256 ee84baec182788f16f098022f63b122fa9c1744ac9af919efbb076ba3cd77f13; candidate object SHA-256 a5ab76ba76bc6c010b2be9866f642b7e685c417ba7b84d673d983808d8b18714.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
