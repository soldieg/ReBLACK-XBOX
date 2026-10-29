# sub_0013CBC0

- Manifest: lot 120, position 62; address order. Candidate span: 1 bytes (0x0013CBC0 to exclusive end 0x0013CBC1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12CBC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12BF40. REA read_bytes evidence ev_9744269dbeda435b87ae815104565db1211ea9795559ba23c4ba36e706deb001 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 c5d014bb098f366c8d049ed962df8b84ba90a3e06db5266e9705a36f3cd8fa62; compiled object SHA-256 4a33927e2d4f2b9f2d8c99ccf49c7ef4eaa7c0d4093eded8d0b205051693e26c; candidate object SHA-256 3df87e7ae9bb583eeb787f8619799d5e2870817f5bd5b0b3edf468bd67ec306b.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
