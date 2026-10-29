# sub_000ADF80

- Manifest: Lot 107, position 15; selected in ascending address order for Lot 104. Candidate span: 882 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000ADF80; body bytes 873, ranges 000adf80-000ae00c;000ae010-000ae0b9;000ae0c0-000ae2f1. Direct incoming call-reference export: 1 reference(s), caller(s): 000b1658@000b10e0. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x9DF80. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0x9D300. XBE raw = derived PE = XboxRecomp split for the full 882-byte span; SHA-256 5f5275fc4baf68a2b1dbb793f6d2d83c1e07aff28ab7a1b38460d239759141d6. REA read_bytes evidence ev_60456268262576b9eb9aec5215df385421cf9e5ef6c3e08162b96cf6c868b909 returned 882 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 882 bytes.
- Source SHA-256 e49bbf14637635970ada701b2aa75372709aa958ac718cf64f2ecd264c0598b5; fresh object SHA-256 8f44aa26f45013b3e0c5f4efbbc9d714d82f2c0bbeae7a36972f36af63dfa97f; candidate object SHA-256 0cc6ee1eb8275ade569fd7bbdaedcecdad0d2d9b7f2180b0d6fa96116d6c7698.
- GitHub Issue: #8519 (https://github.com/soldieg/ReBLACK-XBOX/issues/8519).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
