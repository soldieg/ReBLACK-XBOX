# sub_0013FBA0

- Manifest: lot 121, position 65; address order. Candidate span: 97 bytes (0x0013FBA0 to exclusive end 0x0013FC01).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001557bb@?. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12FBA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12EF20. REA read_bytes evidence ev_e057f4e4abc3327bb60e15e5e1492fcae39b1876dbddf51b1c9d10164dcf0a61 returned 97 bytes. XBE raw = derived PE = split = REA; span SHA-256 503ecef2c1f647859a83e159eb02553da5ee7930526010d10cd16dd42ac6128c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 97 bytes.
- Source SHA-256 55c3a22a6142bd75ec780fe3510332a330515682797e242770458027f3d60ec5; compiled object SHA-256 3187f28ee229eb9964a32fb82cd8c427ab9d4fd0678dae50b02670e6b6bb09d1; candidate object SHA-256 791e7b180f90163429ab845aa5103196025ddec25ce9a088f8b16bbf2dd3ca6c.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
