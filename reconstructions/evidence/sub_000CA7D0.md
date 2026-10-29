# sub_000CA7D0

- Manifest: Lot 112, position 14; selected in ascending address order for Lot 104. Candidate span: 1032 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000CA7D0; body bytes 1023, ranges 000ca7d0-000caa39;000caa40-000caa5c;000caa60-000cabd7. Direct incoming call-reference export: 2 reference(s), caller(s): 000cee82@000cedb0;000cef5f@000cedb0. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xBA7D0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xB9B50. XBE raw = derived PE = XboxRecomp split for the full 1032-byte span; SHA-256 b56fe6d5f0d95166db305896842d2d71bee9b32d4d711d4aeea33e64b1daf127. REA read_bytes evidence ev_09599d9ccad9891be4b4eace665e4bbb09c8928032cca201ab23efbefc358b86 returned 1032 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 1032 bytes.
- Source SHA-256 d62630d2e8de1f27d5dde560eecc78ea83aff2b60ef2ae4841fae266ed6b3dc6; fresh object SHA-256 8d843c25c8067321005bf18125c88f05419e18e09eaead8da755b25ce6ed1cac; candidate object SHA-256 064b2bbd0073fffed88446051c622fc9dd9c48c58825f6bb375d66c333c2dcb7.
- GitHub Issue: #8556 (https://github.com/soldieg/ReBLACK-XBOX/issues/8556).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
