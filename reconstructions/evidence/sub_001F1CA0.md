# sub_001F1CA0

- Manifest: lot 140, position 73; address order. Candidate span: 1 bytes (0x001F1CA0 to exclusive end 0x001F1CA1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E1CA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1020. REA read_bytes evidence ev_7a90eb3554c6e38d309addbeebe60a6950e9e958291b50f9b2a67cd118e75a5a returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 0d42e8b84e04b2711fb346118fa97a0f31597d0fb18e6608ef319a5cbcaf98a6; compiled object SHA-256 091345fd766eaef0d76435c8c22889c32deb4cc0048c2da72d1c234f88dd7d47; candidate object SHA-256 1ddc342f9cb1deec874d52865e56e391ff2e2f4d3da982da981779eb2818f257.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
