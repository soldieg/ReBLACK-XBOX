# sub_001F2AD0

- Manifest: lot 141, position 72; address order. Candidate span: 10 bytes (0x001F2AD0 to exclusive end 0x001F2ADA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2AD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1E50. REA read_bytes evidence ev_e982cfc3f46918a06ce81bb3bd7240cafec57f0e97493a17c7613f226389e414 returned 10 bytes. XBE raw = derived PE = split = REA; span SHA-256 b3630a26796de49d8176639e6c66d6bf95fe0d0a45779391bb1b4ae56f4c78c8.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 10 bytes.
- Source SHA-256 6429394dcd371a999c3a7b56c4cefc16aec54168840953fa7bfd6ed22d788b4b; compiled object SHA-256 ad27101726513b91ef11d75320be4fc4afbfd5c88b095b95cb698b4121d0eeb9; candidate object SHA-256 30d9bbb6b6c6fb8becbf2aded5e6146e2216c6dfb306d0f56e2d7164cfa153ad.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
