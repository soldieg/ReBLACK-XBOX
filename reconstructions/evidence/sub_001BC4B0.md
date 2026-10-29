# sub_001BC4B0

- Manifest: lot 138, position 18; address order. Candidate span: 1 bytes (0x001BC4B0 to exclusive end 0x001BC4B1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AC4B0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AB830. REA read_bytes evidence ev_ac22919764a93dedcc2db56219cad6e11c23615f1be0f80fb3a523142d604b31 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 7b32e1f9be8b91fca35edf71318b70ce1c6356e71a1bf0c1d8cf8871d67b5019; compiled object SHA-256 bf5c09adc4c75fd01d2297d5d3cfa6e6f7104d61aceab78ab87a3ce62ecb012d; candidate object SHA-256 0ff122d26fb5a28b21124d754330b03d4ce275def5f857244ea264d153928225.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
