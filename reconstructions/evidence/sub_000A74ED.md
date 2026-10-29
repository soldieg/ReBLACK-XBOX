# sub_000A74ED

- Manifest: lot 106, position 33; address order. Candidate span: 155 bytes (0x000A74ED to exclusive end 0x000A7588).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 000a75c4@000a75c2. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x974ED; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9686D. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 155 bytes. XBE raw = derived PE = split = REA; span SHA-256 8e3282fa106c77a71774ac895139f6b1c53f4edc5d62f1f6da806584fbd333f8.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 155 bytes.
- Source SHA-256 869c6f3bbbf8cfd78e92b48f37552fc332c396ff9ed456555b46f1c58f4ce65f; compiled object SHA-256 816ee083a18bd55dd57b83f5cac7df365ecdda7ed8fb7e8fe5c19057de64ae49; candidate object SHA-256 084a20632897085c0c7fb3a6497b489bfa9de0811175d4acf18b635d65ed2ff0.
- GitHub Issue: #9870 (https://github.com/soldieg/ReBLACK-XBOX/issues/9870).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
