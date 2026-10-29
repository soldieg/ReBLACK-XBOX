# xbe_entry_point

- Manifest: lot 102, position 29; address order. Candidate span: 114 bytes (0x00025A3F to exclusive end 0x00025AB1).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x15A3F; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x14DBF. REA read_bytes evidence ev_d03271db9703eaa22b796ff47ba7972aab52f713e7aec6a519bf9f009befe25a returned 114 bytes. XBE raw = derived PE = split = REA; span SHA-256 8e8854a07db043879641e8377babf1aaeb5ef8078bdb22f2c37510136755f2b0.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 114 bytes.
- Source SHA-256 4f72ce785cbd21dbfc0089ca72a617f92670f3f81de9b610e403266b1eef9cba; compiled object SHA-256 2ad010859a15fa1c9b6294f95bf50d7755cb8d7d2c2e15e1826177a1c02b5a07; candidate object SHA-256 af1ba8d9fe8ff697f1b43443e710797a3fcb476548019127ac16f83944222b44.
- GitHub Issue: #9050 (https://github.com/soldieg/ReBLACK-XBOX/issues/9050).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
