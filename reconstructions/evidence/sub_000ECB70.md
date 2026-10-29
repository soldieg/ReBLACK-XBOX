# sub_000ECB70

- Manifest: Lot 114, position 84; selected in ascending address order for Lot 104. Candidate span: 17509 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000ECB70; body bytes 17506, ranges 000ecb70-000ecb8c;000ecb90-000f0fd4. Direct incoming call-reference export: 1 reference(s), caller(s): 0010ca93@0010ca20. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xDCB70. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xDBEF0. XBE raw = derived PE = XboxRecomp split for the full 17509-byte span; SHA-256 ace653abab8708898b8c7d0d0c3085b13665e1451933caa5593bc462078634c4. REA read_bytes evidence ev_94420250cb9f629a267654652a5ee6641497a99533dd4db987643b3c5e3da4bd returned 17509 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 17509 bytes.
- Source SHA-256 9bb2cb619262a5af1895f083fb33f025cef377b1115fb35de5e1545a416341b0; fresh object SHA-256 9f7defe04affbcbaadd61042035c9b8155de2228563978483673b46fc0acac6c; candidate object SHA-256 8d36df94cdc7a1cfac08629c0765583261bb94cb6cf1d5b890bcb05533483807.
- GitHub Issue: #9109 (https://github.com/soldieg/ReBLACK-XBOX/issues/9109).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
