# sub_001B9ED0

- Manifest: lot 137, position 67; address order. Candidate span: 21 bytes (0x001B9ED0 to exclusive end 0x001B9EE5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A9ED0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A9250. REA read_bytes evidence ev_7ea536704351e93678d57226bce5f00625772fdbbfc78797332baace55e2eec9 returned 21 bytes. XBE raw = derived PE = split = REA; span SHA-256 6ed48945ffb547d1ec732b714249f059bfaed3138a9dddd073cf15f0fae53c06.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 21 bytes.
- Source SHA-256 48b9719009c4f5fc0729527d191794779661a7627c2d08a3bc56541ddf91bab1; compiled object SHA-256 05dc5ef07c734acdd3938a3a1ec36a5a34791de7e64363f4b7278ccd11ba12cd; candidate object SHA-256 0dc8fb0e70f67f0aee19d3e7aea07dd0c0d1f19b87cbe5ed8e250077cfd6e793.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
