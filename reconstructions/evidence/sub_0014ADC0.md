# sub_0014ADC0

- Manifest: Lot 122, position 21; selected in ascending address order for Lot 105. Candidate span: 149 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x0014ADC0; body bytes 140, ranges 0014adc0-0014ae06;0014ae10-0014ae54. Direct incoming call-reference export: 1 reference(s), caller(s): 0014e1d0@0014e180. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x13ADC0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0x13A140. XBE raw = derived PE = XboxRecomp split for the full 149-byte span; SHA-256 03514a8d104098d584ebebf0cb215fbf3dd816848b5bffeae1fc14636da68818. REA read_bytes evidence ev_98f3dc318fe262f943bc6c9d5bee54b69442be3179ce4cd3ce3f5365d3cda87b returned 149 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 149 bytes.
- Source SHA-256 5d0a632500e5c2b81a2ed1fc6152c01c044d13ea6723b10c85fddd68ec4ac769; fresh object SHA-256 0f3fb07a448a006a557e665d0d81538f4031ab592f45dfb9d75a17d5e647499f; candidate object SHA-256 491bd608bcadba6eb8e583b28edf2d14ec415d07fca2a793dd83c70b9dc19545.
- GitHub Issue: #9153 (https://github.com/soldieg/ReBLACK-XBOX/issues/9153).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
