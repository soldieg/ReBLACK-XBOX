# sub_000BAE50

- Manifest: lot 108, position 75; address order. Candidate span: 4 bytes (0x000BAE50 to exclusive end 0x000BAE54).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAAE50; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAA1D0. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 0c8ac313e7ca7a0625cd5bf5acef15732353176c9b3fb5902b78bb07726b6cd5.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 29944c49617792edd24470f0d97688912030f25378e22b554971f420c7ed330f; compiled object SHA-256 49882817fc4f121e1f2e488519bb278c81ba5b8e9aa63322320c7fde3ed5b4e9; candidate object SHA-256 ef41535f1c9bfb88704ef80daba826930c8860fc86b652512959cdc4338a6abd.
- GitHub Issue: #10088 (https://github.com/soldieg/ReBLACK-XBOX/issues/10088).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
