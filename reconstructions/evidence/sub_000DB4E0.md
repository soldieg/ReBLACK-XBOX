# sub_000DB4E0

- Manifest: lot 112, position 60; address order. Candidate span: 1 bytes (0x000DB4E0 to exclusive end 0x000DB4E1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xCB4E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xCA860. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 8095af65cb6b1716af2291c0ee785bdf58ddaa45109456e6773ac2b7544cd0b9; compiled object SHA-256 fb00e984490b787bfe0be1de95436b47ace9cbe22064e0f5938f25a3b838f610; candidate object SHA-256 a8019e80e9ac9a404e355a0eed184550ff9de5b839f0e8f78d7933a66e1f067c.
- GitHub Issue: #10382 (https://github.com/soldieg/ReBLACK-XBOX/issues/10382).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
