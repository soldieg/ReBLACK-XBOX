# sub_001CCBA0

- Manifest: lot 139, position 23; address order. Candidate span: 12 bytes (0x001CCBA0 to exclusive end 0x001CCBAC).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1BCBA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1BBF20. REA read_bytes evidence ev_2fb8de1f8344ef86fc0964b846e361c657ad150b4996119d1d48a89693b1d6a7 returned 12 bytes. XBE raw = derived PE = split = REA; span SHA-256 24514db9f5608e189417cfcd5e82b5c237754e1864935251c428390384de67fc.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 12 bytes.
- Source SHA-256 fd817e51cfbd4c24f516b7365ef61b32f6dab37c0101e062980c1394549a2598; compiled object SHA-256 012cd0a7a3784702cf11f69f27d8579fe703429450e1250154ae23652c824d40; candidate object SHA-256 26f7c13e58374ebe1f04408bb214004e7d8148e3d806093cae5372865278f75e.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
