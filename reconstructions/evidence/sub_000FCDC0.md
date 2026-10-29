# sub_000FCDC0

- Manifest: Lot 115, position 43; selected in ascending address order for Lot 104. Candidate span: 643 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000FCDC0; body bytes 637, ranges 000fcdc0-000fce49;000fce50-000fd042. Direct incoming call-reference export: 2 reference(s), caller(s): 000ff170@?;000ffbf0@?. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xECDC0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xEC140. XBE raw = derived PE = XboxRecomp split for the full 643-byte span; SHA-256 a2c6b8d526a4e060bdad4135546ac1c1165a4613f2231810a9c8bc8c719899d8. REA read_bytes evidence ev_cb88ca170074e34222d9e08a43cb910db57ddc1ca5ea0117e62d41ea9d7d2412 returned 643 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 643 bytes.
- Source SHA-256 c34744d840151edf6005fd60d73b632e5e1964d1c1a7caecb5a5568ac0d758f9; fresh object SHA-256 6cfc192b15217d82b6d8b196ce91f646be308520a81a9defb78f724076bbcff9; candidate object SHA-256 6760f201b7552d8513f6ee91afe7ecce5b7e857c44d6a6714abb3fdebd6f4c5a.
- GitHub Issue: #9112 (https://github.com/soldieg/ReBLACK-XBOX/issues/9112).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
