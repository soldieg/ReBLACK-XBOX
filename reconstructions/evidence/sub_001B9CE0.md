# sub_001B9CE0

- Manifest: lot 137, position 56; address order. Candidate span: 29 bytes (0x001B9CE0 to exclusive end 0x001B9CFD).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A9CE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A9060. REA read_bytes evidence ev_ac4f284b91fb8801cd96a068d260b41b9c8046d316466697c7cffacd4c51dff7 returned 29 bytes. XBE raw = derived PE = split = REA; span SHA-256 3b0697eb37b5d26cb4100402400de54035760526d03ad13c7fca41bef3c24298.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 29 bytes.
- Source SHA-256 5b049d7ac289334c9a0d660339c9093a804a355e75787a898236d224944cb8eb; compiled object SHA-256 42f99f63c38ca06b2ae11d55b7e1639ba3c8450b5eaa27f5efbb0371f43c495b; candidate object SHA-256 55d44e9ca967123c5049f07e5789622420fb3f3c261b86dd7fcb251d543fc022.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
