# sub_0019CCC0

- Manifest: lot 133, position 31; selected in candidate order for lot 107. Candidate span: 28 bytes (0x0019CCC0 to exclusive end 0x0019CCDC).
- Boundary evidence: Ghidra crosswalk classification: not-in-procedure. The recorded address and length are the candidate span from the 5,050 manifest. This is byte-span evidence; it does not promote an unmapped or interior span to a confirmed function boundary. Direct-reference export lists 0 incoming call sites; callers: none listed. Indirect call coverage remains unknown.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw offset 0x18CCC0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x18C040. XBE raw = derived PE = XboxRecomp split for the complete candidate span; SHA-256 8993836b008e9b4acb97211e8552ccbf46beb6d89e4776b5684361d3c27d4df4. REA read_bytes evidence ev_13bcd4cb8fb9e5955303e1df04c5e26f79fa98316deb5f1b83ca6b0d850b3e9e returned 28 bytes with the same hash.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: candidate symbol 100.00%, .text$mn 100.00%; both object sizes are 28 bytes.
- Source SHA-256 1412482159be0f0d2f1c6f2ebd59719e75e86bf1495c2bcd4f76b09be18057d1; compiled object SHA-256 456d99c03d8b71ddb51d54d9a04683c8fc695be7824ddd1f475294dc2a6959c7; candidate object SHA-256 1fa8ee734029538d0174181c3ba3f4e3ebf05491ee231b11ce0de32ccfa95109.
- GitHub Issue: #9388 (https://github.com/soldieg/ReBLACK-XBOX/issues/9388).
- Source is an address-pinned byte emitter. It is not semantic C or an ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
