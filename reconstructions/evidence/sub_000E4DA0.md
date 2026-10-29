# sub_000E4DA0

- Manifest: Lot 114, position 1; selected in ascending address order for Lot 104. Candidate span: 357 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000E4DA0; body bytes 351, ranges 000e4da0-000e4e89;000e4e90-000e4f04. Direct incoming call-reference export: 3 reference(s), caller(s): 000f5a56@000f59d0;000f5c10@000f5a90;000f5caa@000f5c40. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xD4DA0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xD4120. XBE raw = derived PE = XboxRecomp split for the full 357-byte span; SHA-256 45adc01307850d1692f195744b777657f0125b36890137e440e51a85a81a9d2e. REA read_bytes evidence ev_448859544e5f4cf8753892239e75c7b08abbd686be2601a19b2f0a36ee18e19b returned 357 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 357 bytes.
- Source SHA-256 55aac4fd9be8334137f0429c08dd10c5987880bb85644e67726cf9ecd1db6ad2; fresh object SHA-256 8764d74bf6e1fe8f05f8b9108d5b8ccc7171db8eb56c00d1abf75d369f8f7876; candidate object SHA-256 7a07be50a969f1e5e79ab6214ca8e740dc15151b0c7c2bea67651a2ef9a9bbf5.
- GitHub Issue: #9099 (https://github.com/soldieg/ReBLACK-XBOX/issues/9099).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
