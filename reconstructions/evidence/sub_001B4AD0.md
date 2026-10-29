# sub_001B4AD0

- Manifest: lot 134, position 57; address order. Candidate span: 1 bytes (0x001B4AD0 to exclusive end 0x001B4AD1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A4AD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A3E50. REA read_bytes evidence ev_6784581bd6aa21bd2deb5c045310594e61c3fa3ed18fa2fdd41bc181cca6e8c1 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 3c1ad67206a607d5d51823c6dbec15c0143c59640611eec752d2c1d9d4b8e020; compiled object SHA-256 0967d9db808cd93495435c9acc24db8095fff731a442ff21c1d4fe91cfab7f3e; candidate object SHA-256 ed0fd79bf2db18e66728d5570ff8d2ebdedd36790a150b12249e4a067e5d4232.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
