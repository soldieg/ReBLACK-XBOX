# sub_001BBDB0

- Manifest: lot 138, position 10; address order. Candidate span: 56 bytes (0x001BBDB0 to exclusive end 0x001BBDE8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ABDB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AB130. REA read_bytes evidence ev_042a95c9807661fa17a303c5a2f82cfaa5be5cb934c3f9be157bf806e2d9e1ea returned 56 bytes. XBE raw = derived PE = split = REA; span SHA-256 364ca68815e0a3faffd808e2ae7cb06454b8ed3028b1e2ad9d016547a7344598.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 56 bytes.
- Source SHA-256 52eb8772874cf565063b0b01c0087493e40abc72e7e4ed56bd29e8ef1b164f6d; compiled object SHA-256 235f25ddd5545845105130f14620c1f229b6d693509c1f39165620be2bc606bc; candidate object SHA-256 91423938eeb262024df244f046c4b68c08ea6190f0735997a72ae97e7ad08bc2.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
