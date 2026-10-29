# sub_000A6DC8

- Manifest: lot 106, position 25; address order. Candidate span: 9 bytes (0x000A6DC8 to exclusive end 0x000A6DD1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x96DC8; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x96148. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 9 bytes. XBE raw = derived PE = split = REA; span SHA-256 458aeb7583b12281b5573a1950234fed6ee54f7867de91c4db215640e1ca6652.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 9 bytes.
- Source SHA-256 1bd56de0afc7ff918af13fb03d6c430368a25a6f960fe6db201192adc3d1906a; compiled object SHA-256 f0d55ae7ffb3b74f3cc1d48cba83702a17c71959ff5ed819e83b22118c2e67d8; candidate object SHA-256 aa46f2bbd26d30b075c941e1d0fcc1321bde0b25c215d19ed026e181ce947fb5.
- GitHub Issue: #9858 (https://github.com/soldieg/ReBLACK-XBOX/issues/9858).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
