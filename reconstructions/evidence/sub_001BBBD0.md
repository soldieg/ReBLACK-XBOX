# sub_001BBBD0

- Manifest: lot 138, position 7; address order. Candidate span: 20 bytes (0x001BBBD0 to exclusive end 0x001BBBE4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ABBD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AAF50. REA read_bytes evidence ev_da2d6184fe8cfbd367b089f6143c82bde6d8d8a9c47b2c51a868adf20fc11bdf returned 20 bytes. XBE raw = derived PE = split = REA; span SHA-256 d26f4fa4fb69d36a9a53cfa576111af5dd2c8831fc538d2b6ac0f541273e2018.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 20 bytes.
- Source SHA-256 80d6fc0d3442193caa69a3bf3a388c42c62766c7f595b2ce67206204c50d5204; compiled object SHA-256 e7fa01387a6d83958ada02ccb43bb47a3006d6889706c088d3a3a3456a2b467b; candidate object SHA-256 4bb6204e403635910559f10ed4042c62636c3365db720f490b287f93879250d3.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
