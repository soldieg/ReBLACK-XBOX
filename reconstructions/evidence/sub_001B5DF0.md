# sub_001B5DF0

- Manifest: lot 135, position 67; address order. Candidate span: 8 bytes (0x001B5DF0 to exclusive end 0x001B5DF8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A5DF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A5170. REA read_bytes evidence ev_2a4ecdb53ab60fa3e8017d61e38dd698fc5d15020f2af2b38fc001868d44b1b7 returned 8 bytes. XBE raw = derived PE = split = REA; span SHA-256 8bcbf9d6b865625847299ab7b7d42bad24ccace349f9a0f1cdd7d3989dfd3c07.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 8 bytes.
- Source SHA-256 6e3f861bf5198ff9ff3d1b473c6b96c6c2b7dafb455ef4c69aeda4a8ec179df9; compiled object SHA-256 1ef8db414808a89932ec1e4b4b94cd7597c481df0c4f9387dc98314cfedbc927; candidate object SHA-256 44a5096815df97902bb5a8680c23e4ae297f7afa5c72f07d7f8f3548e55a8009.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
