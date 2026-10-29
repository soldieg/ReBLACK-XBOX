# sub_000B5FC0

- Manifest: Lot 107, position 62; selected in ascending address order for Lot 104. Candidate span: 103 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000B5FC0; body bytes 100, ranges 000b5fc0-000b5fcc;000b5fd0-000b6026. Direct incoming call-reference export: 2 reference(s), caller(s): 001ceeb3@001ceeb0;001ceed3@001ceed0. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xA5FC0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xA5340. XBE raw = derived PE = XboxRecomp split for the full 103-byte span; SHA-256 4037c7b2cb6a53e0ebdf7c44c1cc0532483acb04513ce2112ef0ed461da8b852. REA read_bytes evidence ev_ef293d408bea922507e901f407468bb5162f2e82786725698ce8c6917f8678b2 returned 103 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 103 bytes.
- Source SHA-256 a3bf5c485ddc0006fee64d447c42e8d5d6ea57e68b41f3a2862643a12a279fbd; fresh object SHA-256 01276b2dec215dbf14bd62b2ea3f96a4cc570240fe00ee41e2152feb1e7c090f; candidate object SHA-256 bcca59258569c26e39d932dd81e5b13ebe79dfe1aaab9880e90d3439a1477b65.
- GitHub Issue: #8530 (https://github.com/soldieg/ReBLACK-XBOX/issues/8530).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
