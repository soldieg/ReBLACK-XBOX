# sub_000AB4B0

- Manifest: lot 106, position 88; address order. Candidate span: 266 bytes (0x000AB4B0 to exclusive end 0x000AB5BA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9B4B0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9A830. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 266 bytes. XBE raw = derived PE = split = REA; span SHA-256 9a0a30ee4d8810617e69df2b4bcb10860590ac9d023dd1848e715cbb95dd5081.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 266 bytes.
- Source SHA-256 d942c53828425c0a8504c998b0c7d84243b76cf63c68be024e9ab1544c110730; compiled object SHA-256 d604541883b2f20f997eecadad65eb5399828317f5c10589686d66a6b690b9c4; candidate object SHA-256 205d5f82c15cbab434f24efca54a1cb72ecf2ff1a0697ec0b152db5c105f9c37.
- GitHub Issue: #9914 (https://github.com/soldieg/ReBLACK-XBOX/issues/9914).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
