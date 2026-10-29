# sub_0019AEF0

- Manifest: lot 133, position 17; selected in candidate order for lot 107. Candidate span: 236 bytes (0x0019AEF0 to exclusive end 0x0019AFDC).
- Boundary evidence: Ghidra crosswalk classification: not-in-procedure. The recorded address and length are the candidate span from the 5,050 manifest. This is byte-span evidence; it does not promote an unmapped or interior span to a confirmed function boundary. Direct-reference export lists 0 incoming call sites; callers: none listed. Indirect call coverage remains unknown.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw offset 0x18AEF0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x18A270. XBE raw = derived PE = XboxRecomp split for the complete candidate span; SHA-256 b833df354e7dc52faaaa445bf367533348d41a840aafedc9f66e83e914847fea. REA read_bytes evidence ev_1b7b05f90a01295bb996f3cd2d240f3dd993828b3260dd2c27b39f41001db6e0 returned 236 bytes with the same hash.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: candidate symbol 100.00%, .text$mn 100.00%; both object sizes are 236 bytes.
- Source SHA-256 cbc3e15f7cf04e0a69b11bf4b11e2765dca04ae53e48daa1731371b18ee6949d; compiled object SHA-256 19269ce5baf5828d24103e54825c1fddceb1dc1413ce2d224e185c7b6909089c; candidate object SHA-256 f3068622a3935a046b7c648e75375f1d938484f403dfbca1f35a7e842c38697b.
- GitHub Issue: #9373 (https://github.com/soldieg/ReBLACK-XBOX/issues/9373).
- Source is an address-pinned byte emitter. It is not semantic C or an ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
