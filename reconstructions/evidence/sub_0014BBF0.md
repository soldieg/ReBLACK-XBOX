# sub_0014BBF0

- Manifest: Lot 122, position 24; selected in ascending address order for Lot 105. Candidate span: 151 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x0014BBF0; body bytes 145, ranges 0014bbf0-0014bc39;0014bc40-0014bc86. Direct incoming call-reference export: 2 reference(s), caller(s): 00154dfb@00154c70;00154e28@00154c70. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x13BBF0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0x13AF70. XBE raw = derived PE = XboxRecomp split for the full 151-byte span; SHA-256 93ab6bcde2923df1e111c5a180e555cd013f7ac24fb342f4c72632d6c4e2ba5f. REA read_bytes evidence ev_1f0703f1de90c2d9ac803206b57ff423c0937680c859108a4a05ca08d02fef22 returned 151 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 151 bytes.
- Source SHA-256 378fed700ebed81181011fd7e081219b4800338b8d180a3446a5e7b408625a86; fresh object SHA-256 1a7b77e7c482d4565f4f4355c2f7449c04f0c3219df1f27f8f230a4d6610545b; candidate object SHA-256 b3695c24a14525288dcb37608044076a85ddd951142eabf923a0e3741a0c7b63.
- GitHub Issue: #9162 (https://github.com/soldieg/ReBLACK-XBOX/issues/9162).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
