# sub_001BDCE0

- Manifest: lot 138, position 40; address order. Candidate span: 16 bytes (0x001BDCE0 to exclusive end 0x001BDCF0).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ADCE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AD060. REA read_bytes evidence ev_70a62150863d04a81960db51f5045be79fe470b7e58661fb03f787b6d01b1d2c returned 16 bytes. XBE raw = derived PE = split = REA; span SHA-256 e271bc9fe289ffc1bdc4f28fe8bcc5113c24007f021763c3c041a80039883638.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 16 bytes.
- Source SHA-256 acb72c83a7e62a85a596e6ac5269b7c89bd1de385192426326766915d4e64f8f; compiled object SHA-256 f8014eadd0ed898e8d1064a3188df88f604c411f0ea0da0c147b3fcbd69f35db; candidate object SHA-256 792dd56f926dd3c06b1bbba3cccfb639a46af9f1d05630f52c6571a63558ac16.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
