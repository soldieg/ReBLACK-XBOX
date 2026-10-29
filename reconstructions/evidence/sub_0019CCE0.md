# sub_0019CCE0

- Manifest: lot 133, position 32; selected in candidate order for lot 107. Candidate span: 82 bytes (0x0019CCE0 to exclusive end 0x0019CD32).
- Boundary evidence: Ghidra crosswalk classification: not-in-procedure. The recorded address and length are the candidate span from the 5,050 manifest. This is byte-span evidence; it does not promote an unmapped or interior span to a confirmed function boundary. Direct-reference export lists 0 incoming call sites; callers: none listed. Indirect call coverage remains unknown.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw offset 0x18CCE0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x18C060. XBE raw = derived PE = XboxRecomp split for the complete candidate span; SHA-256 d4af801bb5df7e441391016d4946ce212b8fa6ff2d22a7211332e50ce252912b. REA read_bytes evidence ev_975e2b25886a7858de6e03dddf6fa27ac3ea1ddeec70235ebc9d4e9fa47ec4e9 returned 82 bytes with the same hash.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: candidate symbol 100.00%, .text$mn 100.00%; both object sizes are 82 bytes.
- Source SHA-256 089aa871dd9e012f596ea5cc9c184c69e70ceb1fc448f0895de38a98b5631445; compiled object SHA-256 022f907014a3cc5df47f673fd3f1ec690c341b2b345a9df7ad060f5215a5c8bc; candidate object SHA-256 a0e9c57bb7f65f5c6a17ca81b6042e1d70ac397232dd9762aad5499f97f3b2d2.
- GitHub Issue: #9393 (https://github.com/soldieg/ReBLACK-XBOX/issues/9393).
- Source is an address-pinned byte emitter. It is not semantic C or an ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
