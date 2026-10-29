# sub_000C3BB0

- Manifest: Lot 111, position 92; selected in ascending address order for Lot 104. Candidate span: 322 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000C3BB0; body bytes 311, ranges 000c3bb0-000c3bfc;000c3c00-000c3c37;000c3c40-000c3cf1. Direct incoming call-reference export: 3 reference(s), caller(s): 001256e8@00125640;00017d59@00017cc0;00017ca9@00017bc0. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xB3BB0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xB2F30. XBE raw = derived PE = XboxRecomp split for the full 322-byte span; SHA-256 f217cb0ccf553f7e3ccb6530a4177a51d239ae1a4e1992a30f59d4f962a547eb. REA read_bytes evidence ev_4013aacc3a535c47eb5292b1ff28ac5222910f777f0d5f6093748ad46b9610a7 returned 322 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 322 bytes.
- Source SHA-256 6f2a26c46da69f4f7e8be15d7f764cc0b0664ea8440a736d87d0f0712395bd63; fresh object SHA-256 20b1bd0e2af87a20dffb44e64ed283b399be57ba6799b006cef75b8a92f77d58; candidate object SHA-256 59eeb77a0e155fedd773a5abb10d8d697d9a8a65d1568329b2a365a6a418c25f.
- GitHub Issue: #8551 (https://github.com/soldieg/ReBLACK-XBOX/issues/8551).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
