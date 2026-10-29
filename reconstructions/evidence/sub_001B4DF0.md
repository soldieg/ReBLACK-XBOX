# sub_001B4DF0

- Manifest: lot 134, position 80; address order. Candidate span: 17 bytes (0x001B4DF0 to exclusive end 0x001B4E01).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A4DF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A4170. REA read_bytes evidence ev_9333e48b591cf5ada3f03ff3fa4988726df31c826120f06b4fa96f2d2d34d4b0 returned 17 bytes. XBE raw = derived PE = split = REA; span SHA-256 d1fefe350f9ada1b739cab8b3ca9f2f2b89d03230bcd7a6a8dabd61d35464c4d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 17 bytes.
- Source SHA-256 3c860ec680412c81f905155e9c2cd242f939e599388f4b294aca03c170dba6df; compiled object SHA-256 6954327a9b5ad4148433fb55bf1ab5581c711a27ab7d42f11986cce0ec487a92; candidate object SHA-256 46270ed2859ff1fcc73f2177e008842363a780b5b805b0e5f77b6e021e6c282d.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
