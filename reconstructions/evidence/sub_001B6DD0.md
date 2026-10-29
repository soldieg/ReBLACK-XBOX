# sub_001B6DD0

- Manifest: lot 136, position 48; address order. Candidate span: 3 bytes (0x001B6DD0 to exclusive end 0x001B6DD3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A6DD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A6150. REA read_bytes evidence ev_53ccb3ed16fdbb73da0dcfede4548d682682054d07ae360f120e8a1a626b8717 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 4049ac2b61ef9d57d193ad69d3a1d0a6e6a44b3410d7a3fdd88583c13b975cf0; compiled object SHA-256 cc744fe20259753b66cce93c76c128cb8d28bc5ad1d0ae8402d86ed755c88d84; candidate object SHA-256 556f0d6572ad237685615cea3807f05159624c6460bbd650443a43e015359686.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
