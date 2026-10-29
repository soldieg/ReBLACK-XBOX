# sub_001E8AF0

- Manifest: lot 140, position 11; address order. Candidate span: 50 bytes (0x001E8AF0 to exclusive end 0x001E8B22).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1D8AF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1D7E70. REA read_bytes evidence ev_812695880f1d4ebabbe6bc03301bfe4a9581dc15952141df5031b02ac5536e18 returned 50 bytes. XBE raw = derived PE = split = REA; span SHA-256 1e38aa4b1431540ac386315ccc2dd107963d7bd4159695ab361238bf3362ccba.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 50 bytes.
- Source SHA-256 35ab145c8dcf24f38f5899d5ca38f370984a213df16d26cb92fc21b10d47fab0; compiled object SHA-256 9a05a406e84ca5b4d6ab3c00d406baae1da1338c7ae6cc4eaccdcaeefa9ee95d; candidate object SHA-256 c2e50cae4254c735d434049f6f2a0f7d130b7cac5f9490a31bba00e411b2dae7.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
