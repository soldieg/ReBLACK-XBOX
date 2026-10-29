# sub_000BEB10

- Manifest: Lot 109, position 22; selected in ascending address order for Lot 104. Candidate span: 122 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000BEB10; body bytes 116, ranges 000beb10-000beb49;000beb50-000beb89. Direct incoming call-reference export: 1 reference(s), caller(s): 001fb265@001fb250. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xAEB10. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xADE90. XBE raw = derived PE = XboxRecomp split for the full 122-byte span; SHA-256 2a2308509b6ee4f0d6f19483fa6cf9e4b0dc5b90955d14587778dc0805368b30. REA read_bytes evidence ev_df90cd3bb35dd0832eb0391c91ea171f767a57b893dd4d18fd4076d378e7e677 returned 122 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 122 bytes.
- Source SHA-256 5135591275680629ccea9068f48a1eddded0e4ac5a683abf42f6ab3f07331c75; fresh object SHA-256 5a9a4eda894ea6bef126bd3ad75cf5c9af473cb6241f8c69fbbf05fb54aea693; candidate object SHA-256 4124e53a2f6c450ba17016b2fe9ab98ea1549312d52d14117400ea5c8ee1dd2f.
- GitHub Issue: #8543 (https://github.com/soldieg/ReBLACK-XBOX/issues/8543).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
