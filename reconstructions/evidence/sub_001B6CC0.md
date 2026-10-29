# sub_001B6CC0

- Manifest: lot 136, position 41; address order. Candidate span: 18 bytes (0x001B6CC0 to exclusive end 0x001B6CD2).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A6CC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A6040. REA read_bytes evidence ev_870f746308f0bffef16d7891f0169feb39f244d007006c2887abf90f2b68b8eb returned 18 bytes. XBE raw = derived PE = split = REA; span SHA-256 05f65153101925050f50d739a99b1b9f9c57ba21ada3b884bc6ef8b5a80d9b64.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 18 bytes.
- Source SHA-256 b12106f1e32a4b8beab40008140a42668d96f935b020bec7643bff85baa414f5; compiled object SHA-256 2a75ef34543fe6e4fec4127cd04379cf341061b053de706083dd46cdb9ad13d0; candidate object SHA-256 776f1c620a5dd612c4b366b2f70e9003e5fd1984951784080b01cace632d5683.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
