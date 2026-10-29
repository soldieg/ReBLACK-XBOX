# sub_001F6ED0

- Manifest: lot 143, position 70; address order. Candidate span: 1 bytes (0x001F6ED0 to exclusive end 0x001F6ED1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E6ED0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E6250. REA read_bytes evidence ev_5d4cac23bec573cea3edc8c91705ffa5ebf0b073b51a59ad2573d9d756286f65 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 be7886bf961bb89b8f29c7b098895c6eda3aea10fad427a32f2b19699dd06fa7; compiled object SHA-256 5974ae23883f85f67f7fe6d195c1ab709a550f215fb7fe2f8675c844c1e1499c; candidate object SHA-256 a41a5c867420ce6cd65ffce4e4b6da5abdfb5b418a799db53019ec81dbb039e7.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
