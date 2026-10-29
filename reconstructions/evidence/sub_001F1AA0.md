# sub_001F1AA0

- Manifest: lot 140, position 53; address order. Candidate span: 1 bytes (0x001F1AA0 to exclusive end 0x001F1AA1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E1AA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E0E20. REA read_bytes evidence ev_e011d76d8e67d6770d4944403d970c725795dd45eb144d48158b4c3cb2da5921 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 6cd571b10dd16a5799faa84723e98d9d4e8ac6d2ee378bd4282c46ca54ea3c82; compiled object SHA-256 56e90c7e4336d0741f50dc61c364fc1fbce2c62411d75d2a44a34dadff56d20d; candidate object SHA-256 2d4ae6760b223384afb28705817bcd233cfaea743fa02cd327197616f84af9ff.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
