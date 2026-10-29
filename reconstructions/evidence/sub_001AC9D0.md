# sub_001AC9D0

- Manifest: lot 133, position 100; address order. Candidate span: 106 bytes (0x001AC9D0 to exclusive end 0x001ACA3A).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x19C9D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x19BD50. REA read_bytes evidence ev_31d612bdd3f59c3a51faaee2ee48b15aab470920af356096e3899d185d4ee9c2 returned 106 bytes. XBE raw = derived PE = split = REA; span SHA-256 728843d3d0d82218452caed7be20f6fa7a4a6def4b10705c72a0b2e19e634b7a.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 106 bytes.
- Source SHA-256 700b6098c1cb52bfdf6de87139f2f48651a340ac6cd983bde8f0bd8100f2aaf6; compiled object SHA-256 1b2929695f47c79cb6c85f4df5c946aac8e0b1dde27b5c392f7592d4278f6e42; candidate object SHA-256 5554e3521c55aa8b52742fe18aef56092c8d4805fa3debde4e8253b0a5927b3f.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
