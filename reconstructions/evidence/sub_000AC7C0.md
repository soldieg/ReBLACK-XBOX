# sub_000AC7C0

- Manifest: lot 106, position 94; address order. Candidate span: 23 bytes (0x000AC7C0 to exclusive end 0x000AC7D7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9C7C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9BB40. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 23 bytes. XBE raw = derived PE = split = REA; span SHA-256 df8a7ebee308e9d1df4e6a470fda2593f5e85aedec2352143f1a9c55a4091b91.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 23 bytes.
- Source SHA-256 930bc4b4009ab79ab418eec24c3a5542cbb9224a5f0053334922ca2357fa5337; compiled object SHA-256 04e66fed3b0e0028de21e098cd949accc639bd9a4ae0e0bf15da87830c8ddf5f; candidate object SHA-256 ec7cbf46b181b8a60012d98c8a7c0aa269d9748c0e1a92a428b6b2d11043ce3b.
- GitHub Issue: #9919 (https://github.com/soldieg/ReBLACK-XBOX/issues/9919).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
