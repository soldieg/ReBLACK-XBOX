# sub_001CCBB0

- Manifest: lot 139, position 24; selected in ascending candidate order for lot 106. Candidate span: 239 bytes (0x001CCBB0 to exclusive end 0x001CCC9F).
- Boundary: Ghidra 12.1.3 procedure entry 0x001CCBB0, sum of disassembled body bytes 232, span 239 bytes across ranges 001ccbb0-001ccc28;001ccc30-001ccc9e. Direct incoming call-reference export: 1; callers: 001f120d@001f1080. The export does not establish completeness of indirect references.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1BCBB0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1BBF30. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 ae934234435c489f0b36b6da3d1c7a91956e5440da65419baef3cb2a1ca3fb09. REA read_bytes evidence ev_24bf600d8c7a88860e5b38cd66ff85dd0caa71dac9f771f3d40bd705fdb44e19 returned 239 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 239 bytes.
- Source SHA-256 2765111dee82f5c021396ca3f92199efb9f9eaba434cca04c58d9c0831bdba08; fresh object SHA-256 0834abde979afa3a3dd050dd220e1347cea47c8199aaee05aa370464d67eaf10; candidate object SHA-256 576cfb28d22bee3c975675c04c0d402c257478e7fc257ac26fe001fe3463c7e6.
- GitHub Issue: #9269 (https://github.com/soldieg/ReBLACK-XBOX/issues/9269).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
