# sub_001E7CC0

- Manifest: lot 140, position 8; address order. Candidate span: 30 bytes (0x001E7CC0 to exclusive end 0x001E7CDE).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1D7CC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1D7040. REA read_bytes evidence ev_1aa6e5450828fe5ad04151b4ae16f3efd7a6d0662e6d7f6acaf8a80862116de1 returned 30 bytes. XBE raw = derived PE = split = REA; span SHA-256 3bde4aa0fad51c45e8afff429d27c5e94ffa88e7e5777e6890c84113b70cb555.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 30 bytes.
- Source SHA-256 aa7bad08a18111c4a3635508692f8d87b0b93be70edbef2ff2d3c84a354bc475; compiled object SHA-256 d5e73cdaa6e706605981486e30fc2a9d8750bb7999299a67c311914b5a880b13; candidate object SHA-256 72f1f46300653d86a23e142e5d241d8d412d210c5b53e46aeffe17f96bddc3cc.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
