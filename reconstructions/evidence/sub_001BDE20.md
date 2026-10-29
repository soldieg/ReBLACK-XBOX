# sub_001BDE20

- Manifest: lot 138, position 45; address order. Candidate span: 1 bytes (0x001BDE20 to exclusive end 0x001BDE21).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ADE20; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AD1A0. REA read_bytes evidence ev_8a026f101282a19a5de3d6e650fb91585522e6e3de3462c3891cf1025b1ac437 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 c01618a53f99d14856f6b20c32f38ca81f0febdd7ed4253ceda0099cb49f4642; compiled object SHA-256 dcf92a3b87be34d4dd0fc73bf9763ce29b59e1a8723b8a9cbcddb913241ad0f8; candidate object SHA-256 8aaeb16764580936760fc273c34829ad3f1ca67fd5774afaac3d099885d687b2.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
