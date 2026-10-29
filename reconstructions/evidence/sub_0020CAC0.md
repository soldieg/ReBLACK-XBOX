# sub_0020CAC0

- Manifest: lot 144, position 56; address order. Candidate span: 1280 bytes (0x0020CAC0 to exclusive end 0x0020CFC0).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1FCAC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1FBE40. REA read_bytes evidence ev_5ef62fbd65f4f41bb470ce073fa09a33b2120883d3f44d2a79c9284bf8d71e24 returned 1280 bytes. XBE raw = derived PE = split = REA; span SHA-256 9b3fbd608ca4ab93a0268209b3392cfd05e44ed5d4c183b59e926085fc625887.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1280 bytes.
- Source SHA-256 8190871304eb9c0c0a41188f368e039211a283bdd032bedf4b55a6f91e11f2a7; compiled object SHA-256 c0b012ece6c4db1e3f64294ba6ecbba72108d63114fac405817d37a5b9463297; candidate object SHA-256 9f0e286dad6d371b8cce5c63ab824ad817eb2617ffad230330ad845bf36244be.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
