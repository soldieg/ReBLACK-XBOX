# sub_001EDC90

- Manifest: lot 140, position 21; selected in ascending candidate order for lot 106. Candidate span: 2817 bytes (0x001EDC90 to exclusive end 0x001EE791).
- Boundary: Ghidra 12.1.3 procedure entry 0x001EDC90, sum of disassembled body bytes 2809, span 2817 bytes across ranges 001edc90-001ee3b7;001ee3c0-001ee790. Direct incoming call-reference export: 3; callers: 0020b7cc@0020b770;0020c972@?;0020ce5b@?. The export does not establish completeness of indirect references.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1DDC90. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1DD010. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 2cda71f48029a760e070005461b8d57c1d7d436b0258c73298624dceb8e7af30. REA read_bytes evidence ev_304610878a8c1a65aa290bf752bf526461173c09b8523986575c4390f1e053f5 returned 2817 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 2817 bytes.
- Source SHA-256 a5c502777fa29b14cfad9183a1aed265885e2ef8e1eb45aaf35fdd5ee43f38e9; fresh object SHA-256 94f1e1041997be54b114454d9460e6e59e83a14368b1f3928344bda77a1efb0c; candidate object SHA-256 4acbbd621f9c62744b78ef709039a67b82513ce4868bec8ab78e8d60806c001a.
- GitHub Issue: #9302 (https://github.com/soldieg/ReBLACK-XBOX/issues/9302).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.

## Lot 140 manifest candidate evidence (2026-10-29)

- Manifest: lot 140, position 21; address order. Candidate span: 2817 bytes (0x001EDC90 to exclusive end 0x001EE791).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 3 incoming call sites; callers: 0020b7cc@0020b770;0020c972@?;0020ce5b@?. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1DDC90; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1DD010. REA read_bytes evidence ev_839473620bf64fd9701ce0a4c33a0beb0e707b33fd14f2e39b6a65d39ab1cc26 returned 2817 bytes. XBE raw = derived PE = split = REA; span SHA-256 2cda71f48029a760e070005461b8d57c1d7d436b0258c73298624dceb8e7af30.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 2817 bytes.
- Source SHA-256 a5c502777fa29b14cfad9183a1aed265885e2ef8e1eb45aaf35fdd5ee43f38e9; compiled object SHA-256 5d2b2565c96ade19074a9234094895ab63d03cbddac32dbbee45828a81d1167f; candidate object SHA-256 4acbbd621f9c62744b78ef709039a67b82513ce4868bec8ab78e8d60806c001a.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
