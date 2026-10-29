# sub_000AB11D

- Manifest: lot 106, position 79; address order. Candidate span: 6 bytes (0x000AB11D to exclusive end 0x000AB123).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9B11D; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9A49D. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 398f24f97532d6f5da6cb0e18488d4e78bc1abc4471518526b09b82fb7b0d423.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 4253fa2ee574e8c22d8b89c867b24530bece6a846c65eb1069f9e41a921e9738; compiled object SHA-256 daff65dc218f838a5cecfdf237f210e89d2a9ac1e46dc4db5079f25438df8957; candidate object SHA-256 18983f4d295862a818e9bf3674e64e34032d28191763ea00d5d0926d3b951d2d.
- GitHub Issue: #9907 (https://github.com/soldieg/ReBLACK-XBOX/issues/9907).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
