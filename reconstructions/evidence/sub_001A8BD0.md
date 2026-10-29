# sub_001A8BD0

- Manifest: lot 133, position 90; address order. Candidate span: 29 bytes (0x001A8BD0 to exclusive end 0x001A8BED).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x198BD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x197F50. REA read_bytes evidence ev_f42772d8c76fc4593cf2f21d6a3260c36ece38e3502e2da8ed9f450be0877923 returned 29 bytes. XBE raw = derived PE = split = REA; span SHA-256 2f459d7247a4c447976915a3b76e3168a28d3544866e852755325330cf6e72ea.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 29 bytes.
- Source SHA-256 15f6c44924a555fb8e4244ce4bf15175233b431123027c14d3310e54cfb978e7; compiled object SHA-256 640c248aab9b8dc378fb8a8552adaea348cc3b99e4b70c3320938a527eac33c5; candidate object SHA-256 fe514902614e6ac33bcc5d4c990f16393a5a5100d54f0ef0ece13693cefa38dc.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
