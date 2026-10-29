# sub_0018FFB0

- Manifest: lot 132, position 52; selected in candidate order for lot 107. Candidate span: 11 bytes (0x0018FFB0 to exclusive end 0x0018FFBB).
- Boundary evidence: Ghidra crosswalk classification: not-in-procedure. The recorded address and length are the candidate span from the 5,050 manifest. This is byte-span evidence; it does not promote an unmapped or interior span to a confirmed function boundary. Direct-reference export lists 0 incoming call sites; callers: none listed. Indirect call coverage remains unknown.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw offset 0x17FFB0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x17F330. XBE raw = derived PE = XboxRecomp split for the complete candidate span; SHA-256 366b2adf3c21a0af02879d8097904e60b113b69ec8d337fa6499967e5805ebcb. REA read_bytes evidence ev_1b263ffecf3d1994cf5355fb36b25777cb649117a38e062271e949c5119accb2 returned 11 bytes with the same hash.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: candidate symbol 100.00%, .text$mn 100.00%; both object sizes are 11 bytes.
- Source SHA-256 1ae7af5f698a605e28a1f57ce9c32f7d7adba2faea15bbc3affadfa7d5215c99; compiled object SHA-256 b9394202ac0626d3d4803aeebd1d9639d19fabd01ae603400ec841e715e31eb3; candidate object SHA-256 0a165840e4b0204b965bfce670551473dd022395ed47ccc65cd15572f52840b4.
- GitHub Issue: #9326 (https://github.com/soldieg/ReBLACK-XBOX/issues/9326).
- Source is an address-pinned byte emitter. It is not semantic C or an ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.

## Lot 132 manifest candidate evidence (2026-10-29)

- Manifest: lot 132, position 52; address order. Candidate span: 11 bytes (0x0018FFB0 to exclusive end 0x0018FFBB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x17FFB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x17F330. REA read_bytes evidence ev_40b765411c9ea65fdd958f16ef8d5153397a848bc2e9e0860ec7ee9a555f01fd returned 11 bytes. XBE raw = derived PE = split = REA; span SHA-256 366b2adf3c21a0af02879d8097904e60b113b69ec8d337fa6499967e5805ebcb.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 11 bytes.
- Source SHA-256 1ae7af5f698a605e28a1f57ce9c32f7d7adba2faea15bbc3affadfa7d5215c99; compiled object SHA-256 908ed34c230f2df0e1eee51ae0e208f66c913ed368b8e7845e5709c2a4c80b28; candidate object SHA-256 0a165840e4b0204b965bfce670551473dd022395ed47ccc65cd15572f52840b4.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
