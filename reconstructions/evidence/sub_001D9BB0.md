# sub_001D9BB0

- Manifest: lot 139, position 76; selected in ascending candidate order for lot 106. Candidate span: 1519 bytes (0x001D9BB0 to exclusive end 0x001DA19F).
- Boundary: Ghidra 12.1.3 procedure entry 0x001D9BB0, sum of disassembled body bytes 1504, span 1519 bytes across ranges 001d9bb0-001d9fd8;001d9fe0-001da087;001da090-001da19e. Direct incoming call-reference export: 0; callers: none listed in the direct-reference export. The export does not establish completeness of indirect references.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1C9BB0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1C8F30. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 bde6f59d053c813d934c808ddf5b9be36faeee307bfd98a10b16c5ddc87e0509. REA read_bytes evidence ev_d15260b2a80f7858936ceb021c0e1d61c46ed7cd3c6b0f5639807fbae372391a returned 1519 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 1519 bytes.
- Source SHA-256 0a55c10931c22851e6fe754d7a84d6c45f41baab1b0ceb882efeb1899a33d393; fresh object SHA-256 73b7d7534d99af036989ee3e368d3e374163e959c7bde1e8e3ca071805437515; candidate object SHA-256 375026530602067693542b81aac432cb9db6febca3bdb2702606701319d27fac.
- GitHub Issue: #9288 (https://github.com/soldieg/ReBLACK-XBOX/issues/9288).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.

## Lot 139 manifest candidate evidence (2026-10-29)

- Manifest: lot 139, position 76; address order. Candidate span: 1519 bytes (0x001D9BB0 to exclusive end 0x001DA19F).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1C9BB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1C8F30. REA read_bytes evidence ev_8cbfe0aa99f59267734a3c51a93fdb400a6b9a3d03813a22fdfd05508d5c4781 returned 1519 bytes. XBE raw = derived PE = split = REA; span SHA-256 bde6f59d053c813d934c808ddf5b9be36faeee307bfd98a10b16c5ddc87e0509.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1519 bytes.
- Source SHA-256 0a55c10931c22851e6fe754d7a84d6c45f41baab1b0ceb882efeb1899a33d393; compiled object SHA-256 3fbbb07b643f812895410ef802f5e7d80b8abff2537a9cf0c1f6426d2a8c0dcb; candidate object SHA-256 375026530602067693542b81aac432cb9db6febca3bdb2702606701319d27fac.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
