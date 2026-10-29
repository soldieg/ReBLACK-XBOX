# sub_000D6DA0

- Manifest: Lot 112, position 40; selected in ascending address order for Lot 104. Candidate span: 264 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000D6DA0; body bytes 258, ranges 000d6da0-000d6e0c;000d6e10-000d6e4c;000d6e50-000d6ea7. Direct incoming call-reference export: 1 reference(s), caller(s): 000d6f1e@000d6eb0. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xC6DA0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xC6120. XBE raw = derived PE = XboxRecomp split for the full 264-byte span; SHA-256 e34aeb85256915077d77ba0324857943f3d3558e8a6791296f017311eb12c8ad. REA read_bytes evidence ev_973739ba53b7b8cbb8fd0bd095dbad00ffbb242076c58e3e713b412fa3bec1ed returned 264 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 264 bytes.
- Source SHA-256 d6e78702f36be81bd9b6db0c842a6489b45a397585b7ce5e0e46df9e760c773f; fresh object SHA-256 61d59302fd2d19e83c7bc9241f98876878fa5edeb67a611d6a1f2fcbdfcaa721; candidate object SHA-256 cf74f33bd0747a9df68dd765027701c58f72fe99034cfa3a3baf99bc06a553be.
- GitHub Issue: #8572 (https://github.com/soldieg/ReBLACK-XBOX/issues/8572).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
