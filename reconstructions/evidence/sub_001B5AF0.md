# sub_001B5AF0

- Manifest: lot 135, position 49; address order. Candidate span: 1 bytes (0x001B5AF0 to exclusive end 0x001B5AF1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A5AF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A4E70. REA read_bytes evidence ev_b484814e0e3318a97b7c84232673566cdcb31654b2a96a47ae838ef162eed878 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 73ad4f8eb992350c51518bf8b41db7f8b45885752279adfb26b72febc2e1f4ac; compiled object SHA-256 50e4ec809acd16ee4f584debcb6de5e9aab1e3a40de4b0373c7fdefd48be89d1; candidate object SHA-256 67b03dc8b9d941b67b9c758ee6be27704f6c7c2026f7488e147e19c77eedaa91.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
