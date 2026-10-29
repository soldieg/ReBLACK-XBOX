# sub_000C1DA0

- Manifest: lot 111, position 15; address order. Candidate span: 8 bytes (0x000C1DA0 to exclusive end 0x000C1DA8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB1DA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB1120. REA read_bytes evidence ev_1170f83c433f4613954d883277e925781c638dfc0a34bea8c82e4d4ebc1890a7 returned 8 bytes. XBE raw = derived PE = split = REA; span SHA-256 0313bfd0cef5226e9622da4eb89d7f2953dbe8898785549f15943417f539bac8.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 8 bytes.
- Source SHA-256 de7a65efc7b85e5064882846b195b778e4a7ecde01091197b50f8737957856eb; compiled object SHA-256 889bbd4a228ec99990f0838c1be756862c1b6438ea8e6c5551ac2ad94c31bc71; candidate object SHA-256 91ecb2785c681ea1c47b5189c3bbc8631607165615b389210f01402e62f0315c.
- GitHub Issue: #10278 (https://github.com/soldieg/ReBLACK-XBOX/issues/10278).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
