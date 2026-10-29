# sub_0026DBB0

- Manifest: lot 151, position 29; address order. Candidate span: 60 bytes (0x0026DBB0 to exclusive end 0x0026DBEC).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x25E330; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x25CCD0. REA read_bytes evidence ev_2ff75c2a765390bb8e29b56302ef58687e5d439e243cae08d0f3ca4a630410b5 returned 60 bytes. XBE raw = derived PE = split = REA; span SHA-256 86dd4153b3265044bb3f427311460ebeb96a6932db16cfea0878877e0d9df8a1.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 60 bytes.
- Source SHA-256 db2e03e0a392d80a57638f8392ad7edff1307013a9cda115104d8d91a64520d4; compiled object SHA-256 f3195bc1c9562aa1523959fd8fb6a5aee960a5d8beec8fc297bd293f0f40b9ec; candidate object SHA-256 78354c68115a7bfe36ad28a1190674cf1feedbbb6e2bb6154c452b1d2e51559c.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
