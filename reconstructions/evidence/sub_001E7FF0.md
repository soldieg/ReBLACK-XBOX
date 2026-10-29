# sub_001E7FF0

- Manifest: lot 140, position 9; selected in ascending candidate order for lot 106. Candidate span: 1353 bytes (0x001E7FF0 to exclusive end 0x001E8539).
- Boundary: Ghidra 12.1.3 procedure entry 0x001E7FF0, sum of disassembled body bytes 1296, span 1353 bytes across ranges 001e7ff0-001e8016;001e8020-001e811c;001e8120-001e814c;001e8150-001e820c;001e8210-001e823c;001e8240-001e8333;001e8340-001e83e3;001e83f0-001e8493;001e84a0-001e8538. Direct incoming call-reference export: 1; callers: 001f12a6@001f1080. The export does not establish completeness of indirect references.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1D7FF0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1D7370. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 4c11b5e53447ac6abf5a3d2b595587b7ba51aac97248dd65b7d2239f6336aebf. REA read_bytes evidence ev_45b6234b330cb5abc5ed4a6d8879a78fb5ccd84abfa98de33b223f2fdd563e4e returned 1353 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 1353 bytes.
- Source SHA-256 480332029c3c1bb7345e605a361328d04c0c073fbc6da58ce34c63468830bb5a; fresh object SHA-256 72ab15314dbedd5611a53768650a75155fe55e9473a7e9c6b7b7cc7308bcf000; candidate object SHA-256 1d098876851864cd53abed09b6b7d4ee5b0647a720cc328588bd1271f4b28115.
- GitHub Issue: #9298 (https://github.com/soldieg/ReBLACK-XBOX/issues/9298).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.

## Lot 140 manifest candidate evidence (2026-10-29)

- Manifest: lot 140, position 9; address order. Candidate span: 1353 bytes (0x001E7FF0 to exclusive end 0x001E8539).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001f12a6@001f1080. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1D7FF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1D7370. REA read_bytes evidence ev_3bd56ae327ce7e5bd30f983f379f3b7d46e919295a52cf6d7034571b5abb3513 returned 1353 bytes. XBE raw = derived PE = split = REA; span SHA-256 4c11b5e53447ac6abf5a3d2b595587b7ba51aac97248dd65b7d2239f6336aebf.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1353 bytes.
- Source SHA-256 480332029c3c1bb7345e605a361328d04c0c073fbc6da58ce34c63468830bb5a; compiled object SHA-256 9153ade45efddabf9b4fee3e118146532665289cf2f7e7c4bdaf118cb4135c87; candidate object SHA-256 1d098876851864cd53abed09b6b7d4ee5b0647a720cc328588bd1271f4b28115.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
