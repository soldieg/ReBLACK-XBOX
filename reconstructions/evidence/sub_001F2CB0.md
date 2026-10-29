# sub_001F2CB0

- Manifest: lot 141, position 93; address order. Candidate span: 26 bytes (0x001F2CB0 to exclusive end 0x001F2CCA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2CB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E2030. REA read_bytes evidence ev_12833fae3f0bcf95480edd51ff4f7773ac29adb30297c6ec4e1b8cdfc980a663 returned 26 bytes. XBE raw = derived PE = split = REA; span SHA-256 5020cb0bf29d6fb210766ac153dbafdf13474c8bb37f6904ca4ff76e04fc468b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 26 bytes.
- Source SHA-256 f4a5faa6d9c41d81c2e33a7a0260e9664aa955448c1b96fb0c83ba41e9945320; compiled object SHA-256 9e08650b0c820bf2b21f9cf22d2b59ffcdb4d7fbdb137397a23a457f22c604c7; candidate object SHA-256 f2d0a6fc9a9e23f649db685953f9cb923a6f4c4bfc15f709068c507319099018.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
