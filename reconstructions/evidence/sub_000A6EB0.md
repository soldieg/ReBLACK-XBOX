# sub_000A6EB0

- Manifest: lot 106, position 30; address order. Candidate span: 51 bytes (0x000A6EB0 to exclusive end 0x000A6EE3).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x96EB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x96230. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 51 bytes. XBE raw = derived PE = split = REA; span SHA-256 7d5d90e752a4d25055d3abc8ad9e9fa4e4dd2a045cdaa94d23a9b6bf3d0434e5.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 51 bytes.
- Source SHA-256 1765dd09e3209af6a7439b01c2650bfef8e6816427b40d5e68672eb86724e314; compiled object SHA-256 031db1781ada0481a2cf8db5967442ff5d92f4953587796831c4b9b4ac86e74f; candidate object SHA-256 0ae525baa6530cf99f41fc739d4bf46d68ef88376fcb904f517208d0d8e57b9e.
- GitHub Issue: #9863 (https://github.com/soldieg/ReBLACK-XBOX/issues/9863).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
