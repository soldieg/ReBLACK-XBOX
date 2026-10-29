# sub_001FC0F0

- Manifest: lot 144, position 1; address order. Candidate span: 24 bytes (0x001FC0F0 to exclusive end 0x001FC108).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1EC0F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1EB470. REA read_bytes evidence ev_ae393171111d3a47cfd02ab5bf18423bfb71190a9bf3b1af0dcec8f16037037f returned 24 bytes. XBE raw = derived PE = split = REA; span SHA-256 400d09ae0e7fecdc9002492e16cffc1eda112e7355257b124ffc2fee309e5bc2.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 24 bytes.
- Source SHA-256 c0e5f54ee193c33161dfe0507cc5b72f324323f55cf7802c95076f3813eb685d; compiled object SHA-256 3a9508f56910577a0033cdad3c6305159e2463f61186b02b1f36c36da9923c53; candidate object SHA-256 d6a55e463e26f5619e4ce91160ed86f1e7ae1b6b63ebc9ff9142e7fb39e71214.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
