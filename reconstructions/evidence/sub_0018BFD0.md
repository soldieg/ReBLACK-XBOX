# sub_0018BFD0

- Manifest: lot 132, position 22; address order. Candidate span: 24 bytes (0x0018BFD0 to exclusive end 0x0018BFE8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x17BFD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x17B350. REA read_bytes evidence ev_da369914154be446562bcfa6be21b8711788b4dbf2fa6811b186911f2c327231 returned 24 bytes. XBE raw = derived PE = split = REA; span SHA-256 c8e2456697ba850d4dbf071b04937f815192d77c2e1eeba42c14578c1307ecf7.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 24 bytes.
- Source SHA-256 7f35293b874bcddc5e0d84f99c83cd61e1322092494dde42fae84351384323e4; compiled object SHA-256 ada065e9a5c6a17cc39fcd30bf35c82e57a1bbcb46a7d07b344c83fa07132f85; candidate object SHA-256 4fdd68535fe63785670558fa580263bfbf7ca923babab34507d9f215753fe0ba.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
