# sub_001B3FA0

- Manifest: lot 134, position 23; address order. Candidate span: 3 bytes (0x001B3FA0 to exclusive end 0x001B3FA3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A3FA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A3320. REA read_bytes evidence ev_db8153f3e803ee1d8b33993b5e6a6bf10b95aa24f71fb1e03c77ebef66e5a82a returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 3ad36c6eeda528589a7a06f48684d3318576059d93d51f445ab60d280620edc7.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 96a2325a274b6ec19843ecc01285d5243984450a56e8c0ca104eea122acbe54f; compiled object SHA-256 093500ae3e45df722cdc04e04c9ff16c211fed4004df54d18756af6aa8577cdf; candidate object SHA-256 b87780aa64c91b46c889b973af1712e34997c7675058e3dc253d8b38e5bc8a8f.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
