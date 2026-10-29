# sub_001B7FF0

- Manifest: lot 137, position 19; selected in ascending candidate order for lot 106. Candidate span: 3413 bytes (0x001B7FF0 to exclusive end 0x001B8D45).
- Boundary: Ghidra 12.1.3 procedure entry 0x001B7FF0, sum of disassembled body bytes 3365, span 3413 bytes across ranges 001b7ff0-001b85d6;001b85e0-001b864c;001b8650-001b86bc;001b86c0-001b872c;001b8730-001b879c;001b87a0-001b880c;001b8810-001b887c;001b8880-001b88ec;001b88f0-001b895c;001b8960-001b8aac;001b8ab0-001b8b1c;001b8b20-001b8b8c;001b8b90-001b8bfc;001b8c00-001b8c6c;001b8c70-001b8d44. Direct incoming call-reference export: 6; callers: 001ba18d@001ba090;001e4678@001e4580;001bf456@001bf430;001ebcfd@001ebc30;001ba1dd@?;001ce88a@001ce830. The export does not establish completeness of indirect references.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1A7FF0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1A7370. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 4e4f27e8434ca260ce5e5f006fd174c507bbc9fe60fba5ea661262e5d41b9c4b. REA read_bytes evidence ev_a664832b97b28af296921cf5769bb2ba779e3c37ff8d24b450f2e98caaba6301 returned 3413 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 3413 bytes.
- Source SHA-256 76ca432dd6879e61faa199d04200e53068aca9ca834b183c2541d47e31194ec6; fresh object SHA-256 d2a16a8ab14abfb3619f4861ac7bb991ca56f52026b0f0fe74226fbf9911f4c8; candidate object SHA-256 d642c13b7370f0069f491f1b1219708bb0c5ec14cd2bd5901e79067b37a0a8f5.
- GitHub Issue: #9263 (https://github.com/soldieg/ReBLACK-XBOX/issues/9263).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.

## Lot 137 manifest candidate evidence (2026-10-29)

- Manifest: lot 137, position 19; address order. Candidate span: 3413 bytes (0x001B7FF0 to exclusive end 0x001B8D45).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 6 incoming call sites; callers: 001ba18d@001ba090;001e4678@001e4580;001bf456@001bf430;001ebcfd@001ebc30;001ba1dd@?;001ce88a@001ce830. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A7FF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A7370. REA read_bytes evidence ev_0e90ced1c1f835501eae8cac22e57cb9d19d31a9577f4741b1489cce7108609f returned 3413 bytes. XBE raw = derived PE = split = REA; span SHA-256 4e4f27e8434ca260ce5e5f006fd174c507bbc9fe60fba5ea661262e5d41b9c4b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3413 bytes.
- Source SHA-256 76ca432dd6879e61faa199d04200e53068aca9ca834b183c2541d47e31194ec6; compiled object SHA-256 fd30a9f1a0a97d8bc68db4aa69b47422ab8f4d81a8b69324a1337879d5e1ba81; candidate object SHA-256 d642c13b7370f0069f491f1b1219708bb0c5ec14cd2bd5901e79067b37a0a8f5.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
