# sub_001AA2E0

- Manifest: lot 133, position 95; address order. Candidate span: 26 bytes (0x001AA2E0 to exclusive end 0x001AA2FA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x19A2E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x199660. REA read_bytes evidence ev_64d71606b7a39591556c6c200ae8fc5d04b72f73d62c8539ebdf14d0c48b2f4a returned 26 bytes. XBE raw = derived PE = split = REA; span SHA-256 2cf0ff7e440831528420ce300fb2046e3efc6a86da32b6702abc68ec5b7365c3.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 26 bytes.
- Source SHA-256 77b6bdf1a8f4426115b6f4e5512b363119d84e421190a7e2e4e14d7b23966a4c; compiled object SHA-256 7f186538cf6d01c22208e92ed0e2506c246350d4b16ca249be349eeaa6da15ed; candidate object SHA-256 5b288ded163bd14a6ce2ef09aeca21272d4a6f54ad552bbf5a457d1e9d601a42.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
