# sub_000E6BA0

- Manifest: Lot 114, position 39; selected in ascending address order for Lot 104. Candidate span: 126 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000E6BA0; body bytes 120, ranges 000e6ba0-000e6be9;000e6bf0-000e6c1d. Direct incoming call-reference export: 9 reference(s), caller(s): 0001897e@00018960;000e75c3@000e7570;000f3ae7@000f3ae0;000f4817@000f4810;000e83f7@?;000e8867@?;000f1ba7@?;000f47b7@?;000f1bb7@?. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xD6BA0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xD5F20. XBE raw = derived PE = XboxRecomp split for the full 126-byte span; SHA-256 b347cddc4000f37ba3bfe81757b4762a850951f2b553a6037a1040146198f9ac. REA read_bytes evidence ev_b396c4fd19fbb99b6ccecaa1e713a7a0a5f17dbc02169e8aa9723012976ff6ec returned 126 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 126 bytes.
- Source SHA-256 925c0d2b354176779b659d6bded98138812a31683a227bc400427d85d37e9557; fresh object SHA-256 ba2391a4e49df5fe265f074d451ed5b845090ff2a486e7558cc0e9139a2a365c; candidate object SHA-256 02895111b2f0c11d1e0eedf40f41b4d903a265445848c1a7905eccd931266180.
- GitHub Issue: #9104 (https://github.com/soldieg/ReBLACK-XBOX/issues/9104).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
