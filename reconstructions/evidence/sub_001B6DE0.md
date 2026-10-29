# sub_001B6DE0

- Manifest: lot 136, position 49; address order. Candidate span: 29 bytes (0x001B6DE0 to exclusive end 0x001B6DFD).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A6DE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A6160. REA read_bytes evidence ev_ed34bc781bcb038a6bf594533df6c7c38a481f6ca33be73312dd5fcfb4068cc6 returned 29 bytes. XBE raw = derived PE = split = REA; span SHA-256 1ed8bc4d0ac579b02ed0e33018d933e56201973151a9159731c2591757f365bc.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 29 bytes.
- Source SHA-256 96ecc506865f2a00aa4c6a03138b94219b31a7d3443c85770adfdb5247f2da2b; compiled object SHA-256 8ca678507e03baa73575f8909429a9d3a13c1bb6396e93bb11516c2ed53184c2; candidate object SHA-256 2081709309e3f5b651a8b161108d1a993e0be80e29ee731a3ed49a7de994a816.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
