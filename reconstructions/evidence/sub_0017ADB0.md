# sub_0017ADB0

- Manifest: lot 126, position 7; address order. Candidate span: 17 bytes (0x0017ADB0 to exclusive end 0x0017ADC1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x16ADB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x16A130. REA read_bytes evidence ev_08cd1c7224cd8d501898b9e0c7251d87bba99fa369da11d82d660c5b4c9e90f6 returned 17 bytes. XBE raw = derived PE = split = REA; span SHA-256 3381a65f6ef888a6cc639ccbebab6fc4bf26c734e1187b807f37169c3344c8cd.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 17 bytes.
- Source SHA-256 24f477b6baedaaadd67f610894eb6894ac23ba961765d690b3acbcfda44b64c8; compiled object SHA-256 c2019c2dab2723d3bcae936bfa72cbb69585c2c2b238ead748010ca0c07efe3a; candidate object SHA-256 c00ee90e0944c1a371e10dfeb8c1f9f2e015680fdbc9679a4243faea90eb410d.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
