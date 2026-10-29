# sub_001B9CA0

- Manifest: lot 137, position 54; address order. Candidate span: 21 bytes (0x001B9CA0 to exclusive end 0x001B9CB5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A9CA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A9020. REA read_bytes evidence ev_74c89874c96ada475743be7b26d224742f7084b8be87914f47f58e85deda586c returned 21 bytes. XBE raw = derived PE = split = REA; span SHA-256 6ed48945ffb547d1ec732b714249f059bfaed3138a9dddd073cf15f0fae53c06.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 21 bytes.
- Source SHA-256 a48da79657b52e9ba217dc04d339736269f8e28fa88db79e03bc4f435d74758c; compiled object SHA-256 08f2e0de5885561c7b3516f9012acbb98b0b20bbbf1d32004e5e2304464e1438; candidate object SHA-256 71c6469942a896e5daf23494eda3451fbf026e4809343568adbf048a9bbf1f03.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
