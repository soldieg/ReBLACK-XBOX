# sub_001FCAD0

- Manifest: lot 144, position 10; address order. Candidate span: 47 bytes (0x001FCAD0 to exclusive end 0x001FCAFF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ECAD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1EBE50. REA read_bytes evidence ev_6eccb8843c584b44ca0a25aac5d5689a39e45486d746150fcc11dbfdbdd1a0ac returned 47 bytes. XBE raw = derived PE = split = REA; span SHA-256 06c5b69a315f9a571cb5381bdb2a67a853bfe686375096b6326975d23559ae8f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 47 bytes.
- Source SHA-256 6da13934b9e678accba8424a305d8f14f4675c173a87768378685b5b256d6c70; compiled object SHA-256 77570636f2abd68debbaced85b3d9280c013f84163315944ef65013a341e23bd; candidate object SHA-256 47b6294bf72a34f1ac3f55aaeab029dc76b1cb2261652f19d6326d7f575f2dee.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
