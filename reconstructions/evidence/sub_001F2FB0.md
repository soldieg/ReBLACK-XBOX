# sub_001F2FB0

- Manifest: lot 142, position 11; address order. Candidate span: 7 bytes (0x001F2FB0 to exclusive end 0x001F2FB7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2FB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E2330. REA read_bytes evidence ev_6a38207b16d4c2a045fcf7707ac9e72d8a807545e5fd9fa2b1b499b19418f515 returned 7 bytes. XBE raw = derived PE = split = REA; span SHA-256 7e720091086e8be5f7ca215fb0f33ed1377e03113f9e7a4885eb3b87acf5c34d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 7 bytes.
- Source SHA-256 ed9e18aaf6e0af49e894f3d293c8fea62d44974702fa86e4cd66545ea0e15542; compiled object SHA-256 0cc6ce56820e5adb89a7f736ba56bec2c7417a0df3987b284e4fc9a31acb3149; candidate object SHA-256 e6e390f152136babee3bed5721118c630ea7a2c3afb5fd65aadddf43cb3de4e6.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
