# sub_001BAAF0

- Manifest: lot 137, position 92; address order. Candidate span: 18 bytes (0x001BAAF0 to exclusive end 0x001BAB02).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AAAF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A9E70. REA read_bytes evidence ev_ce6f6b79fdd3b0c9ed6f87f80c0ef34880a9d695289ef469044d2d1eb6559171 returned 18 bytes. XBE raw = derived PE = split = REA; span SHA-256 0b41a00ba34ef7b0bbc49502680a371b18dfd5473441157db8badd8196be09a2.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 18 bytes.
- Source SHA-256 2b373141d4a45f6efbf0ee62f3d1bcf0ba7b7bd463cd4376eb6cd773b6fbc835; compiled object SHA-256 4bb3568d87b4c2b7ecca837fab09a6888881b52b6242b5df861e30afb7fd59cb; candidate object SHA-256 1e8c930b45684f3d45c6c5b68e419603de9b0e00974ceb947da2c4a0c9daf396.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
