# sub_000CEDB0

- Manifest: Lot 112, position 22; selected in ascending address order for Lot 104. Candidate span: 523 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000CEDB0; body bytes 514, ranges 000cedb0-000cede6;000cedf0-000cefba. Direct incoming call-reference export: 0 reference(s), caller(s): none listed in the direct-reference export. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xBEDB0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xBE130. XBE raw = derived PE = XboxRecomp split for the full 523-byte span; SHA-256 748de94e4f84c13532ae0959380f466ca19870e4615c730f7b4c4b3304280994. REA read_bytes evidence ev_0d907402ca2d14ebb4b3b88dcceccbe86d69d177ca940e567dbb4dacfeb48599 returned 523 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 523 bytes.
- Source SHA-256 e1787f2065f37e6f7c800485ed9c39012a50cf623d6fa4f6df4f145884822ad5; fresh object SHA-256 c12d2dc8dc9c54fbe206e765e541a391ecbb587c88376d225bc65bbf37d22d4a; candidate object SHA-256 349513950839bb1b93cde2c596c82d0b882c139c6e377a0fdd555591572106da.
- GitHub Issue: #8559 (https://github.com/soldieg/ReBLACK-XBOX/issues/8559).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
