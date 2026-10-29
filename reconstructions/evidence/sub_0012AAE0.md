# sub_0012AAE0

- Manifest: lot 119, position 71; address order. Candidate span: 19 bytes (0x0012AAE0 to exclusive end 0x0012AAF3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x11AAE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x119E60. REA read_bytes evidence ev_aea019e8fa4ae0416f694b46d071b8508ecc58bcad83b72a396b4974729cbe10 returned 19 bytes. XBE raw = derived PE = split = REA; span SHA-256 c9c11a83131e0e067d4bba5905b172546536466bc23874b90c08aa5bc7fab14f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 19 bytes.
- Source SHA-256 57fdc16d6351edfcb47aa70c42fa576b5806c2e3c4305ed9cf9d5c28cffc9051; compiled object SHA-256 a18b3fb82e257d42af0c41b4424ccfd51a8af724b99541880e23c179c42e507f; candidate object SHA-256 ae9eca1c13a069cb0093886e251eefc7e8e41a80f6564d61285b549d5ee9009a.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
