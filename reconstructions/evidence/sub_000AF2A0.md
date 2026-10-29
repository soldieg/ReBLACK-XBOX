# sub_000AF2A0

- Manifest: Lot 107, position 16; selected in ascending address order for Lot 104. Candidate span: 132 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000AF2A0; body bytes 124, ranges 000af2a0-000af2b7;000af2c0-000af323. Direct incoming call-reference export: 1 reference(s), caller(s): 000af789@000af600. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x9F2A0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0x9E620. XBE raw = derived PE = XboxRecomp split for the full 132-byte span; SHA-256 af7eabda4454498e8bff29bf0132166d878101bef7ea84912b765b7ca080edef. REA read_bytes evidence ev_1cd70385d1ef157f7c07767b0b456821671bb77c0856c6f4d2853f5875dd066c returned 132 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 132 bytes.
- Source SHA-256 3a9126baa010e6352e6f616de298e7b494d69bcfe377f224e34778cce8f75edf; fresh object SHA-256 34ca3887d666c6d8687428e6e17fdcd4bebb26a08f0b69c3e0cfe03ac3ce613f; candidate object SHA-256 0c3dfe02eadd1a453b7cc51c2900169eb42319a95e57e145ede48edac34da3fb.
- GitHub Issue: #8521 (https://github.com/soldieg/ReBLACK-XBOX/issues/8521).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
