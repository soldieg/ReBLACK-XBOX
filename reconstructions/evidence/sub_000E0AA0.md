# sub_000E0AA0

- Manifest: Lot 112, position 95; selected in ascending address order for Lot 104. Candidate span: 2416 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000E0AA0; body bytes 2402, ranges 000e0aa0-000e0be7;000e0bf0-000e0c39;000e0c40-000e140f. Direct incoming call-reference export: 1 reference(s), caller(s): 001f126a@001f1080. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xD0AA0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xCFE20. XBE raw = derived PE = XboxRecomp split for the full 2416-byte span; SHA-256 8856983522b66e369c4682dadbb559490efbe2b8657d6c1a4284399c0518aaed. REA read_bytes evidence ev_6a08adf13079e98b762a52a6a0de25ffbbbc7b071575800c30b7712d653b44ad returned 2416 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 2416 bytes.
- Source SHA-256 5e4b9563e833174c640d898bd3921220956aa76456cb6dce052da26587fd0bfe; fresh object SHA-256 12cb4388cd67313ecff4866a7fd5d9f054b28453fcf96d1ff3a1c414db6fead3; candidate object SHA-256 240833da7e79832bcab32cdacf3da9badb7f7a564b462acb09b06052d2066bd0.
- GitHub Issue: #9095 (https://github.com/soldieg/ReBLACK-XBOX/issues/9095).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
