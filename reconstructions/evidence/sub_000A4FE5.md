# sub_000A4FE5

- Manifest: lot 106, position 19; address order. Candidate span: 2 bytes (0x000A4FE5 to exclusive end 0x000A4FE7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x94FE5; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x94365. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 2 bytes. XBE raw = derived PE = split = REA; span SHA-256 52ee7bc49cb2b8661e54f8103f068838ea4bf5089db7626cad08a85a8a6dce66.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 2 bytes.
- Source SHA-256 92717e1dbd036d8ce047dd16ced0f9688b239d9e97e2e9252d26b9a6b62b3a6d; compiled object SHA-256 5cbffdd390950de091dee18aecb9b722906544244750a06b9cf597cdfa5e3e04; candidate object SHA-256 32ac37d30d55f935fe577325f8b840a02070b0798cb5c534485018de0db5eba5.
- GitHub Issue: #9852 (https://github.com/soldieg/ReBLACK-XBOX/issues/9852).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
