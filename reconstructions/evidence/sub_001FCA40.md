# sub_001FCA40

- Manifest: lot 144, position 6; address order. Candidate span: 13 bytes (0x001FCA40 to exclusive end 0x001FCA4D).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ECA40; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1EBDC0. REA read_bytes evidence ev_e80c83e90a8fa2c4bc5aaf846b6805d92841d17de4c00e528650376f716efa9d returned 13 bytes. XBE raw = derived PE = split = REA; span SHA-256 7d2011c0bfafd9b6fb9a15e966f9331c14b3026d2429a7008cca6bb29e59d1b4.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 13 bytes.
- Source SHA-256 a0df44d471d726351cb56ade865118174caabe78aab409e029b4ce78c65b9ac1; compiled object SHA-256 85b38a9a62cb8bf4a13d2b7d21a2a13a16f0ce9de52870f6c946acdf4f15987a; candidate object SHA-256 0edc81fb1fb5c9572c9b8264a0e6e08d61ed51a199e3c9351bffcf18839926c6.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
