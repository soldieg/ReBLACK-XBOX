# sub_000CFDA0

- Manifest: Lot 112, position 23; selected in ascending address order for Lot 104. Candidate span: 149 bytes.
- Ghidra 12.1.3 target default-xbe-rea-view.exe, SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; procedure entry 0x000CFDA0; body bytes 142, ranges 000cfda0-000cfde8;000cfdf0-000cfe34. Direct incoming call-reference export: 0 reference(s), caller(s): none listed in the direct-reference export. This export does not prove a complete indirect call graph.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0xBFDA0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, file offset 0xBF120. XBE raw = derived PE = XboxRecomp split for the full 149-byte span; SHA-256 df78e1a1f8853ca06eccaaa637df9653bff36cedade7027674ae81f2c61591db. REA read_bytes evidence ev_c3ca4c8238f3e4092b95a3a4911bbfb707668aad386855ee72b4865fd9cf5a9d returned 149 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and identified candidate object sizes are 149 bytes.
- Source SHA-256 3fc68c340bcd733b0104aee81f029e69052d9ee9edd16a15d9ee0e9aeb46e8f1; fresh object SHA-256 a2e43db0bdfa8ed7bb142629b97563d4c4c1a3cc288c48427e76a796bb2a0bcd; candidate object SHA-256 a9c31cab467c7472140e4d12a10c63a84bee32eccea8f83ea3f708c05f032b90.
- GitHub Issue: #8561 (https://github.com/soldieg/ReBLACK-XBOX/issues/8561).
- The source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
