# sub_001BEB20

- Manifest: lot 138, position 56; address order. Candidate span: 29 bytes (0x001BEB20 to exclusive end 0x001BEB3D).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AEB20; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1ADEA0. REA read_bytes evidence ev_e5b011ac33d435e66962bb868d273cb40e56267a2d2d140a01cc8a455f5e7e4a returned 29 bytes. XBE raw = derived PE = split = REA; span SHA-256 92d5f37ae60ec4368898b63dd02ff46fe78d8949da3428ae162cca09783fda28.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 29 bytes.
- Source SHA-256 f8363bf46b197be79ad3605df561062b1278c341729cab2e28864b43117c970f; compiled object SHA-256 4bfa244f0cc0059393373cf773ef26f36105c1cbbcc4fb37169022e9eb71f9ef; candidate object SHA-256 ac1bd00cbfa00b5776103f001967a1ba27181aeb8297157ae9ffefda522a923f.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
