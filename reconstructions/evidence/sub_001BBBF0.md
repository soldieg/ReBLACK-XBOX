# sub_001BBBF0

- Manifest: lot 138, position 8; address order. Candidate span: 16 bytes (0x001BBBF0 to exclusive end 0x001BBC00).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ABBF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AAF70. REA read_bytes evidence ev_976b5eb775e7775a63798d9e7e0c89f351084806ae2f0cdf4cce65d91a82adf4 returned 16 bytes. XBE raw = derived PE = split = REA; span SHA-256 00e67238a4865903914430b63cf59b5840ad260c6df4e55f0354a29aaaefe4d2.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 16 bytes.
- Source SHA-256 0833ddbb0c3aefe82f3de41b0ba536a2787fc4da3bd3ff509753e716d713ef91; compiled object SHA-256 ad36609e61df18e00a1e69c661d4214fe49c7490f3c34da45e0d5e97f486c1c9; candidate object SHA-256 c4ad2d3be22d43c6fabfeadfb0b513bf26fcb16f45d9fb0c240b047a28e17a07.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
