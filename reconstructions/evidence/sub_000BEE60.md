# sub_000BEE60

- Manifest: Lot 109, position 43; selected in ascending address order for Lot 104. Candidate span: 198 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000BEE60; body bytes 195, ranges 000bee60-000beecc;000beed0-000bef25. Direct incoming call-reference export: 2 reference(s), caller(s): 001f906f@001f9040;000d17ce@000d1710. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xAEE60. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xAE1E0. XBE raw = derived PE = XboxRecomp split for the full 198-byte span; SHA-256 d5231d0e236a4ddd88b405a22bb34e45e7512f683f305ceaf89c822b818e472c. REA read_bytes evidence ev_c4d11b974682d6c324dec848b15b1a56b591cdc0528a52af1f9255ba60dd581f returned 198 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 198 bytes.
- Source SHA-256 ec003520a53490ca56ffacf1c5ea78b6575683a35fe1484319b625e4f80da867; fresh object SHA-256 b5f148116229d1705ceb8069c992455b543a65b962b3ea1167dc902690bca54e; candidate object SHA-256 0760043891488574466ee9ea4caa4f05f4133643b4f21c4bf2ab5f8526c4534a.
- GitHub Issue: #8544 (https://github.com/soldieg/ReBLACK-XBOX/issues/8544).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
