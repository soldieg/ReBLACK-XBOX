# sub_0019BBC0

- Manifest: lot 133, position 21; selected in candidate order for lot 107. Candidate span: 96 bytes (0x0019BBC0 to exclusive end 0x0019BC20).
- Boundary evidence: Ghidra crosswalk classification: not-in-procedure. The recorded address and length are the candidate span from the 5,050 manifest. This is byte-span evidence; it does not promote an unmapped or interior span to a confirmed function boundary. Direct-reference export lists 0 incoming call sites; callers: none listed. Indirect call coverage remains unknown.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw offset 0x18BBC0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x18AF40. XBE raw = derived PE = XboxRecomp split for the complete candidate span; SHA-256 37f7d2dcf10ee98f623649a0e7de55a5250b55e2d3d742bcbafc010ec2585316. REA read_bytes evidence ev_de8ab56973ae05e3d56fff7d46b6d77e26c4b89812a0a8fecdbd4ea02024c289 returned 96 bytes with the same hash.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: candidate symbol 100.00%, .text$mn 100.00%; both object sizes are 96 bytes.
- Source SHA-256 04508c23aaf7c5ab1c7960c7bd8e6b01220c38305a948112dd29f45aa9f42c6b; compiled object SHA-256 3159045454af83f00c123727361a7267803f7dedec57641231191d9bc1f1523d; candidate object SHA-256 b7e48c7c8f968942e594aefed7738e470aeca878f80b71a31258cfe55ab3ba68.
- GitHub Issue: #9374 (https://github.com/soldieg/ReBLACK-XBOX/issues/9374).
- Source is an address-pinned byte emitter. It is not semantic C or an ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
