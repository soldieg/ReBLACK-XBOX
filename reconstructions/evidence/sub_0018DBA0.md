# sub_0018DBA0

- Manifest: lot 132, position 33; address order. Candidate span: 14 bytes (0x0018DBA0 to exclusive end 0x0018DBAE).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x17DBA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x17CF20. REA read_bytes evidence ev_7f63fe9e1afe8e9918bb273afaa50b94b5d3a84a4cc6243a3aa020a8b2b83f21 returned 14 bytes. XBE raw = derived PE = split = REA; span SHA-256 591ef8fae18b3d8e7d5afef43f88e56ee189ad68fd1ae43abf29410776322729.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 14 bytes.
- Source SHA-256 55371e9bab0a3d60bcb4ae8404a58fbf57aa97b41e0ea50e6d1d95810040fc25; compiled object SHA-256 ae8b476381696d014e870f241376f3d438e155b6ac6adcd4c9397aaac8a2797a; candidate object SHA-256 ab0abe9d63cd348d07be047ed367463bc8f51d3e91691f0254b4c443304d27c0.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
