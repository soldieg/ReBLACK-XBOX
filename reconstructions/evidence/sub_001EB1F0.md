# sub_001EB1F0

- Manifest: lot 140, position 16; selected in ascending candidate order for lot 106. Candidate span: 583 bytes (0x001EB1F0 to exclusive end 0x001EB437).
- Boundary: Ghidra 12.1.3 procedure entry 0x001EB1F0, sum of disassembled body bytes 576, span 583 bytes across ranges 001eb1f0-001eb2d8;001eb2e0-001eb436. Direct incoming call-reference export: 4; callers: 001eb801@001eb7f0;001eb6d7@001eb6b0;001ebb5d@001ebb40;001ebb69@001ebb40. The export does not establish completeness of indirect references.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1DB1F0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1DA570. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 ada39f6f26eee75fa9f91d13fba7762aad9c3c5801be77386f91d81b3f586ed3. REA read_bytes evidence ev_423075516d3f78807613a44f8174e629e43a91c609bc68f3c98944ac257c405e returned 583 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 583 bytes.
- Source SHA-256 fd43e42efe8765a16dcb40576a4c5c130d6d4a3077d557e852d2acd9fd79e64c; fresh object SHA-256 c077a1c5c2ac3adff35d29ec4c95746d55c09d7f591ed0c8d107723f43df5930; candidate object SHA-256 f1707cc4c544b75dbdf3b7e5675fad2460dc5d8e0e0d2f19bd66ee1ce4f0bcea.
- GitHub Issue: #9300 (https://github.com/soldieg/ReBLACK-XBOX/issues/9300).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.

## Lot 140 manifest candidate evidence (2026-10-29)

- Manifest: lot 140, position 16; address order. Candidate span: 583 bytes (0x001EB1F0 to exclusive end 0x001EB437).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 4 incoming call sites; callers: 001eb801@001eb7f0;001eb6d7@001eb6b0;001ebb5d@001ebb40;001ebb69@001ebb40. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1DB1F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1DA570. REA read_bytes evidence ev_ec24bbe61a18fdcf994565fa54bfecc352a9d41064fa70d01e8202cbe7ad72ef returned 583 bytes. XBE raw = derived PE = split = REA; span SHA-256 ada39f6f26eee75fa9f91d13fba7762aad9c3c5801be77386f91d81b3f586ed3.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 583 bytes.
- Source SHA-256 fd43e42efe8765a16dcb40576a4c5c130d6d4a3077d557e852d2acd9fd79e64c; compiled object SHA-256 4ebe6170d201b968ced2780bafe84a2f4211f21f6b847d5b85dd9f0b259a2eee; candidate object SHA-256 f1707cc4c544b75dbdf3b7e5675fad2460dc5d8e0e0d2f19bd66ee1ce4f0bcea.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
