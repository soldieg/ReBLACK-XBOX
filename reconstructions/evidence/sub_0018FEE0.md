# sub_0018FEE0

- Manifest: lot 132, position 51; selected in candidate order for lot 107. Candidate span: 11 bytes (0x0018FEE0 to exclusive end 0x0018FEEB).
- Boundary evidence: Ghidra crosswalk classification: not-in-procedure. The recorded address and length are the candidate span from the 5,050 manifest. This is byte-span evidence; it does not promote an unmapped or interior span to a confirmed function boundary. Direct-reference export lists 0 incoming call sites; callers: none listed. Indirect call coverage remains unknown.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw offset 0x17FEE0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x17F260. XBE raw = derived PE = XboxRecomp split for the complete candidate span; SHA-256 95d94a70c17780571fc6184de255859e11504bfdb1d119960a4c6d13a1b763b5. REA read_bytes evidence ev_c16bd659675ba5053a8b87653a1bdf272a45659b87ca76c5910938862a813bbd returned 11 bytes with the same hash.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: candidate symbol 100.00%, .text$mn 100.00%; both object sizes are 11 bytes.
- Source SHA-256 68f9a0665f0de02fc1810f9e8c92b4d90d46199f141b99ff814b4a1e7297154a; compiled object SHA-256 6af8d32a8ed9f271ade5c4a1f5a18bd47a311f48a8afd8fa3249f6cccda712d6; candidate object SHA-256 83c8d371a3bb57006ca471b381487f1454a22731e6550825296c3ad963a46a4a.
- GitHub Issue: #9328 (https://github.com/soldieg/ReBLACK-XBOX/issues/9328).
- Source is an address-pinned byte emitter. It is not semantic C or an ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
