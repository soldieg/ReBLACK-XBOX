# sub_001AAEF0

- Manifest: lot 133, position 96; address order. Candidate span: 86 bytes (0x001AAEF0 to exclusive end 0x001AAF46).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x19AEF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x19A270. REA read_bytes evidence ev_2ec852f7264f486037d82e5179e77658f38c0c15b7f6293e700636a2e6d1a08f returned 86 bytes. XBE raw = derived PE = split = REA; span SHA-256 b6544220c159738d9ad76abde6a7e213605e6c5332ff9d0a794a777c9249d439.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 86 bytes.
- Source SHA-256 1c0f0cfb9176ea4ad370eff8da75eb222b6b77cf1730df1ffb74641a3f01d626; compiled object SHA-256 f50a711469d2b7bd697211fa5bbc01deff17c1122d62c6f57457ee697338d1ef; candidate object SHA-256 59623ddfa1af366beb750484d31a21232df721b3ba7c338089554ff7db3ceddd.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
