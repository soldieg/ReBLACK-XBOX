# sub_001BD2F0

- Manifest: lot 138, position 23; address order. Candidate span: 1 bytes (0x001BD2F0 to exclusive end 0x001BD2F1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AD2F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AC670. REA read_bytes evidence ev_363f27a679a19e894708ff40bd639c8102b9cbfe1b45f1828695baae48b31a17 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 3ed0a114ec8d346babc6953144d02ca7cf811447dc22e67834006c461c84f5fe; compiled object SHA-256 16c515ebd94f68923846d1559c1ece94dfe6cff10f2b7e535b36a10bcf8bb593; candidate object SHA-256 e2e31159e3cbc7f664ce540d02882616a8a876b21e5bcb43cdb868cba77d9630.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
