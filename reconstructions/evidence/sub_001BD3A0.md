# sub_001BD3A0

- Manifest: lot 138, position 28; address order. Candidate span: 79 bytes (0x001BD3A0 to exclusive end 0x001BD3EF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AD3A0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AC720. REA read_bytes evidence ev_739c3b3570fcd2b51f129f3dc74a9470322664738f1d0652bd59a5941b8ce49e returned 79 bytes. XBE raw = derived PE = split = REA; span SHA-256 146b1bbec8be41dda729be36e28dcfa2add3c2c890931bca3deed61524ddfd6e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 79 bytes.
- Source SHA-256 cdba2a130e591f88174b4fef5b07e3701eef8c637dc4e03d3cdf0de539fa6d27; compiled object SHA-256 da9abc30edef702811a4129fa85c72d5edbf6a316aa1cd66855475cdb4ead2a7; candidate object SHA-256 2f0a5d6cb1274249dcf94ca0c49846210c1ec2b86e2e701e18785ab6011c28fc.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
