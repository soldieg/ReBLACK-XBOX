Candidate `sub_001C2AF0` - manifest lot 138, position 75; address `0x001C2AF0`; candidate span 112 bytes.

- Source is an exact-byte emitter (`_emit`); semantic C reconstruction remains pending.
- Ghidra 12.1.3 target `default-xbe-rea-view.exe`, SHA-256 `aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd`; entry `0x001c2af0`; body 109 bytes in 2 ranges: `0x001c2af0-0x001c2b0c; 0x001c2b10-0x001c2b5f`; 1 direct callers, 1 resolved callees, no unresolved calls; relationship coverage complete. Evidence `ev_4d69d3e6acbc72853f20dccf7538440d928e78f0fd078a417c8fdccb64402860`.
- Non-body gap bytes in the span: `0x001c2b0d-0x001c2b0f` = `8d 49 00`. Split disassembly identifies these as alignment instructions.
- Original XBE SHA-256 `df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6`; XBE raw bytes at file offset `0x1b2af0` equal split `.s` bytes, 112/112; byte SHA-256 `c4f6e6259103d9804201cd12a04e0fb9ff545057cd36a004568b87620423046e`.
- Fresh MSVC object and candidate object have identical `.text$mn` bytes, confirmed by ObjDiff 3.8.2: function and section 100.00%. MSVC 19.51.36260 x86 `/W4 /TC /c /O2 /GS- /Zl /Gd /Gy` compiled without diagnostics; COFF relocation count is zero for both objects.
- Source SHA-256 `d435a22f971f5b0854daa61b6ed4c35cc3a0a3ced88be4d4b03c8038732b6338`.
