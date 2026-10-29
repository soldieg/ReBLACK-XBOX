# sub_001B3EE0

- Manifest: lot 134, position 16; address order. Candidate span: 1 bytes (0x001B3EE0 to exclusive end 0x001B3EE1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A3EE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A3260. REA read_bytes evidence ev_66db95613e7827c10218f94076f4549b81f6cb290becd6eae041d714182466a0 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 a50d8f308efaffb3b117d88b91ce8576c28839a9d9efe31de971d3095e4bf1d5; compiled object SHA-256 4c15200e1a54a3b0591972e178759a35bb5cd1b5dab3e7b5eee773dbc9a9238a; candidate object SHA-256 9cb81fc03d084adc70059005349c71e001377ab5d740837bf817dc649b21a413.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
