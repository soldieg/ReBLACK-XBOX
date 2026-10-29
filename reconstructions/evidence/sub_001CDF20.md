# sub_001CDF20

- Manifest: lot 139, position 30; address order. Candidate span: 263 bytes (0x001CDF20 to exclusive end 0x001CE027).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1BDF20; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1BD2A0. REA read_bytes evidence ev_8318398987d0cae475b3bcf2566c6243afd53cdb6d62cd148a05be721ee07e07 returned 263 bytes. XBE raw = derived PE = split = REA; span SHA-256 246e3b28f305a790417410373407f44e50a2e0b663e494a60af860cd09a8acf5.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 263 bytes.
- Source SHA-256 4707ea97a1fa51f598f98812f0361f3a00090abc3c8dd53dbe41663c86ac0034; compiled object SHA-256 ed52a81861fa2f9176bd0cc7aec4646af70836b09dcdb8925ba1329f117787ae; candidate object SHA-256 ba0acc154e4806f5367593b62713494e18beb2bdded7d0358a04a29e7ea176e5.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
