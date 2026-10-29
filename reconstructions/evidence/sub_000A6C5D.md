# sub_000A6C5D

- Manifest: lot 106, position 24; address order. Candidate span: 52 bytes (0x000A6C5D to exclusive end 0x000A6C91).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x96C5D; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x95FDD. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 52 bytes. XBE raw = derived PE = split = REA; span SHA-256 b507040fbc95e13bcdcda74422ecd8002b70b012826d0eb48d43f78ec8faf6e7.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 52 bytes.
- Source SHA-256 c124e06e41e8408533604bded6a457c42bfaebd90750d61e5ba634861d9270d9; compiled object SHA-256 b560c047b6cfccc5d4cc79e91d6af540d54cb5c07d255e50976d87832a6d2f51; candidate object SHA-256 22ce50278c20f53b40dc7ef4b4b194cc6723e3fd3a17a09f856e430b3c72f432.
- GitHub Issue: #9857 (https://github.com/soldieg/ReBLACK-XBOX/issues/9857).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
