# sub_0012AAD0

- Manifest: lot 119, position 70; address order. Candidate span: 1 bytes (0x0012AAD0 to exclusive end 0x0012AAD1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x11AAD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x119E50. REA read_bytes evidence ev_9ac2626cb9818256894c38c781e924b289101a4f5086f8cefe58d7cfce138d16 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 147edf169a9ae49f27076b79b356c629873af9820bf5613ad12d19c573622c96; compiled object SHA-256 4eadd75163ac3f646d170c5ded9765e797ef10b9a7b94ab03d71ba0beca7245a; candidate object SHA-256 b0b22b62a4efeccd1a0f63e829804bdea286da55ef1230ace6a0eeed55deb819.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
