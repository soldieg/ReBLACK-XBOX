# sub_001CDA10

- Manifest: lot 139, position 29; address order. Candidate span: 27 bytes (0x001CDA10 to exclusive end 0x001CDA2B).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1BDA10; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1BCD90. REA read_bytes evidence ev_2e16ee898cb2b80f61743b20e4154aac00c4962f7514e2e916f1e3dcce05c2cd returned 27 bytes. XBE raw = derived PE = split = REA; span SHA-256 5d7b4bdab65c68a82baa5975308a34b5d3afeb01a6349c17a8f720be94fa3cb5.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 27 bytes.
- Source SHA-256 c95162f3e458ba06a780d2c5a803675604dc4e4b75b2e43ca37380045a28cb44; compiled object SHA-256 5f9faa841a408f578f17bb7df0e9abae136c1033b4be1fd0bac661774219f482; candidate object SHA-256 ac21ea37a96dffd0b566366c4566f0c3872f86216ba0e4e4c582bc6ff8eff3ce.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
