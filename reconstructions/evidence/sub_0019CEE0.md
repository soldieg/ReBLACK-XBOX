# sub_0019CEE0

- Manifest: lot 133, position 36; selected in candidate order for lot 107. Candidate span: 24 bytes (0x0019CEE0 to exclusive end 0x0019CEF8).
- Boundary evidence: Ghidra crosswalk classification: not-in-procedure. The recorded address and length are the candidate span from the 5,050 manifest. This is byte-span evidence; it does not promote an unmapped or interior span to a confirmed function boundary. Direct-reference export lists 0 incoming call sites; callers: none listed. Indirect call coverage remains unknown.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw offset 0x18CEE0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x18C260. XBE raw = derived PE = XboxRecomp split for the complete candidate span; SHA-256 532f176ac9559b668e30e0c6710d1057a47527264da5db8b5c6b8652e998a5c7. REA read_bytes evidence ev_c1a03708b03a77a597b3958a213f217e615e5e4efd37e227a94cae4f9d67e09b returned 24 bytes with the same hash.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: candidate symbol 100.00%, .text$mn 100.00%; both object sizes are 24 bytes.
- Source SHA-256 061adf1bfa5d65a48f149ffb241e685f7c03bb48a18c7bcd206f9fa3d5b03288; compiled object SHA-256 fbe27f40551ab13d33d6bcd850fc0ccb680c379c64103c0d9db6ca376dd4be04; candidate object SHA-256 f418d929babcc0611a99e341b8851e2475306b25b862d096f1db2c2d493ccbcc.
- GitHub Issue: #9392 (https://github.com/soldieg/ReBLACK-XBOX/issues/9392).
- Source is an address-pinned byte emitter. It is not semantic C or an ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.

## Lot 133 manifest candidate evidence (2026-10-29)

- Manifest: lot 133, position 36; address order. Candidate span: 24 bytes (0x0019CEE0 to exclusive end 0x0019CEF8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x18CEE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x18C260. REA read_bytes evidence ev_b72f856c6c0f88a29055614ff39e19f7bbabdd4641238ebc964ffe508e455d42 returned 24 bytes. XBE raw = derived PE = split = REA; span SHA-256 532f176ac9559b668e30e0c6710d1057a47527264da5db8b5c6b8652e998a5c7.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 24 bytes.
- Source SHA-256 061adf1bfa5d65a48f149ffb241e685f7c03bb48a18c7bcd206f9fa3d5b03288; compiled object SHA-256 380a60eed6f1a8446ab9a648856971b7ccd460d5ba366a2916855840ff23fa4b; candidate object SHA-256 f418d929babcc0611a99e341b8851e2475306b25b862d096f1db2c2d493ccbcc.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
