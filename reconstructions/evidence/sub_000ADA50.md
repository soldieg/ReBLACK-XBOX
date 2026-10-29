# sub_000ADA50

- Manifest: lot 107, position 10; address order. Candidate span: 23 bytes (0x000ADA50 to exclusive end 0x000ADA67).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9DA50; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9CDD0. REA read_bytes evidence ev_9f795c6c7542f557c322958dcddf5bb2e3212efd64f1d57abb9c388a4d3a989d returned 23 bytes. XBE raw = derived PE = split = REA; span SHA-256 514bd3d1e8ded07953a6b51d98552e5066ec86d98bec351138fc7e4385a08abf.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 23 bytes.
- Source SHA-256 ce3772564082a62a78cd347e73016e437e126fd68537f55eae1db8eb9b759fb7; compiled object SHA-256 e771db4ccd8c2217bc5ce29ca7de09c37ee7d2810391cc7abb9fa82791a98ca6; candidate object SHA-256 e4613a752a17c479a057e951016a8927845a26add9492e91055d902796184a5b.
- GitHub Issue: #9939 (https://github.com/soldieg/ReBLACK-XBOX/issues/9939).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
