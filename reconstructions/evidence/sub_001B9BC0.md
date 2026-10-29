# sub_001B9BC0

- Manifest: lot 137, position 51; address order. Candidate span: 29 bytes (0x001B9BC0 to exclusive end 0x001B9BDD).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A9BC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A8F40. REA read_bytes evidence ev_942ee6a2106d4b2dbf5dbc0d21bc1227fab8c8c876643f0874fb14763d81bb8e returned 29 bytes. XBE raw = derived PE = split = REA; span SHA-256 3b0697eb37b5d26cb4100402400de54035760526d03ad13c7fca41bef3c24298.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 29 bytes.
- Source SHA-256 18b4de5c51ba4a3922fbb32d56286700134e178a7c542e7fa4545a35e1539b4b; compiled object SHA-256 4e8f49577b8048d74e791d706fe5b8d443e9919baf06c9d7c6dfb96f16e96658; candidate object SHA-256 5d3c222c43376dde0c4975cf3baaf6e792186c0473808b13ab12f72ea323ccaf.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
