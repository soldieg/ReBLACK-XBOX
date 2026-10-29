# sub_000DBB60

- Manifest: Lot 112, position 87; selected in ascending address order for Lot 104. Candidate span: 127 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000DBB60; body bytes 124, ranges 000dbb60-000dbb6c;000dbb70-000dbbde. Direct incoming call-reference export: 2 reference(s), caller(s): 000e07ce@000e0750;001ce2cf@001ce270. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xCBB60. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xCAEE0. XBE raw = derived PE = XboxRecomp split for the full 127-byte span; SHA-256 be1a945d3a2e60ed551f2dd288df70c0b4385429bb826cc10f779183117a210e. REA read_bytes evidence ev_0b721a67251abe2f4070108b71649b16edb8a5da30a8ebb3d6b0a6ca7aae8b41 returned 127 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 127 bytes.
- Source SHA-256 94eb5114f35ec916efe0e6c5528d7bb214409110ce1192e429bc3cae359302fd; fresh object SHA-256 d8f9bc8e969b2e500accf2be0ba8d6076e3f7d9732678779451b53dffa62961f; candidate object SHA-256 e4856d07ddbebcaad7ea9dacf2129269188c7f573d553a9c4c7f1b1d04f98cf4.
- GitHub Issue: #8574 (https://github.com/soldieg/ReBLACK-XBOX/issues/8574).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
