# sub_000E1BD0

- Manifest: Lot 113, position 4; selected in ascending address order for Lot 104. Candidate span: 55 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000E1BD0; body bytes 52, ranges 000e1bd0-000e1bdc;000e1be0-000e1c06. Direct incoming call-reference export: 1 reference(s), caller(s): 000f5d70@000f5c40. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xD1BD0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xD0F50. XBE raw = derived PE = XboxRecomp split for the full 55-byte span; SHA-256 8823ca45d61b749ed98cb483491e320841901bfd30b6b5761bb11a2d7a5f2166. REA read_bytes evidence ev_e6c046245937c1b062bb1ed3a284e31fe49144c91217a1222ba0656b0f7b9028 returned 55 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 55 bytes.
- Source SHA-256 00ca53dec63397462ced8e1f7c802882f10681cd01612152ccfd022a97347c68; fresh object SHA-256 f65d60ac6a606f87ad8107d660b1c2a0e4f5ec080b5e0a4b4211d2b80f236802; candidate object SHA-256 9bceada12967c4b5ff8d66e944050ecf51a37c6ced42b2c6828c12d415d2612e.
- GitHub Issue: #9097 (https://github.com/soldieg/ReBLACK-XBOX/issues/9097).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
