# sub_0013DEB0

- Manifest: lot 121, position 27; address order. Candidate span: 1 bytes (0x0013DEB0 to exclusive end 0x0013DEB1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12DEB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12D230. REA read_bytes evidence ev_86b6ab9678e8c8096ba44e13d83e6fb6facd213eff75033f4900ca1770f16aeb returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 33dc13b1070147963ffde1a56ccd17f7779646aebae127d4dde1fa8262cbd010; compiled object SHA-256 f2cb5fbb4bbc94f9d4d0b2ce64318842a6b17d36d9466f260ffec9d3236a3763; candidate object SHA-256 51a1feef8e6f4e8e75050a75e35b5527c4534c60628b1895124b9ff63e3dca9a.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
