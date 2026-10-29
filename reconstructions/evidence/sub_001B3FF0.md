# sub_001B3FF0

- Manifest: lot 134, position 27; address order. Candidate span: 5 bytes (0x001B3FF0 to exclusive end 0x001B3FF5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A3FF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A3370. REA read_bytes evidence ev_9043b2212f1f447e88cbaa5c42c45150e96d3db5e4dbb11e210020d28d418ea5 returned 5 bytes. XBE raw = derived PE = split = REA; span SHA-256 8cad4061f7462df3586af0942fd0de860c94376587768a065839209dcaf67fd5.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 5 bytes.
- Source SHA-256 86f16ed37d52ab52c445f34a60fb7eef07a4e8ed23e1862a6ae88fb8598abe19; compiled object SHA-256 8513f28991b7038f815db0f7109be351746cb2c3439dd49c11a671feb53a61c3; candidate object SHA-256 2a69a3f7c070be63a26218014ab8b1bf123494b346d9333ab01a5401a5b08561.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
