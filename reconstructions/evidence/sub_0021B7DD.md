# sub_0021B7DD

- Manifest: lot 150, position 58; address order. Candidate span: 11 bytes (0x0021B7DD to exclusive end 0x0021B7E8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x20B81D; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x20AB5D. REA read_bytes evidence ev_dbcece70d4c09700f3ab9780591040930b9790b788c50a79f2f738629e62b131 returned 11 bytes. XBE raw = derived PE = split = REA; span SHA-256 35cb347e6ee523e6f25e4bc13a406741c93f2b785f8338f45ef201d098a75334.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 11 bytes.
- Source SHA-256 7c456d8a0d20ce56dcca6181aeccbee93e8f5ab3cf81195849ff680a1c841ce3; compiled object SHA-256 fc310e08b170a3aef78b075dca1fb00c44c3a6f591340261d6241d557a392dec; candidate object SHA-256 96b637833ed80653bfdac4dacce7345621169c1315ce06337cf4eaa15f77f47f.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
