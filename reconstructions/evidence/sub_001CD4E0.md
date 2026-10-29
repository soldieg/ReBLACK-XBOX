# sub_001CD4E0

- Manifest: lot 139, position 28; selected in ascending candidate order for lot 106. Candidate span: 473 bytes (0x001CD4E0 to exclusive end 0x001CD6B9).
- Boundary: Ghidra 12.1.3 procedure entry 0x001CD4E0, sum of disassembled body bytes 470, span 473 bytes across ranges 001cd4e0-001cd50c;001cd510-001cd6b8. Direct incoming call-reference export: 1; callers: 001d630a@?. The export does not establish completeness of indirect references.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1BD4E0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1BC860. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 34cf14566fd626d083118dff034a42fe990a4fce5f058f9f96211e5c8e7be48b. REA read_bytes evidence ev_054c53f893f26a961c6d22bf7e2f97b8bfb0d9f5d101f67ae151b74252b76e21 returned 473 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 473 bytes.
- Source SHA-256 cf0901248979c4746eaa4391865891f3864d233e6a6464eaa661fae4ca3e54ea; fresh object SHA-256 443d9679becc0cb4ae40cd2adec20d0198cf0c9dbac99c3b1ee2edee9f3c5b33; candidate object SHA-256 f04ec034b1c707be62626f9d36bfd941be837b3aa864b05a2b5f873ee938b6e4.
- GitHub Issue: #9276 (https://github.com/soldieg/ReBLACK-XBOX/issues/9276).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.

## Lot 139 manifest candidate evidence (2026-10-29)

- Manifest: lot 139, position 28; address order. Candidate span: 473 bytes (0x001CD4E0 to exclusive end 0x001CD6B9).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001d630a@?. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1BD4E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1BC860. REA read_bytes evidence ev_8995972d3050f96f5547482d18a999c1c2c15136c1043bb22bfa3ce472cbc94a returned 473 bytes. XBE raw = derived PE = split = REA; span SHA-256 34cf14566fd626d083118dff034a42fe990a4fce5f058f9f96211e5c8e7be48b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 473 bytes.
- Source SHA-256 cf0901248979c4746eaa4391865891f3864d233e6a6464eaa661fae4ca3e54ea; compiled object SHA-256 1bbde01d07cc670f2001d199747f89c479ee438214e0f2e7e74784596145bbac; candidate object SHA-256 f04ec034b1c707be62626f9d36bfd941be837b3aa864b05a2b5f873ee938b6e4.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
