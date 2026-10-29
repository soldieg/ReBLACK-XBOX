# sub_001B5AA0

- Manifest: lot 135, position 44; address order. Candidate span: 1 bytes (0x001B5AA0 to exclusive end 0x001B5AA1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A5AA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A4E20. REA read_bytes evidence ev_171065b69e2f428cbe63551c1aa584d1bf68d47b067c6c3d0ee651c25318018b returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 3b6294c1ba8bd089b26033c6c90bc562fd5420c5f0c31c7fa848acf6e7dd11bd; compiled object SHA-256 59ea17ad7519b57e8779d07df70dfb17abed4b3133287eb37f3e15cb0d7baae9; candidate object SHA-256 5fbae0c11c520448844336f87f1b16efba1fe10e1750285f64d7dc2284dbcc56.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
