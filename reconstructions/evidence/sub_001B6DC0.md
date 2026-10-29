# sub_001B6DC0

- Manifest: lot 136, position 47; address order. Candidate span: 1 bytes (0x001B6DC0 to exclusive end 0x001B6DC1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A6DC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A6140. REA read_bytes evidence ev_ab29fe9f9df3d63e4448ff1be70125651ad44c6e7426acb009f702ea6088fbc0 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 610e2b747b118363536db1cfacc6a302744fe4029b3b5e58f2b00a543c466457; compiled object SHA-256 b5ff408347bab6de0dd1bacdc5c980a62c840baad9d7d008d8aa20eedc509e14; candidate object SHA-256 c83fce263901a774c521b66f02388b05f3c6fc01eb062c2d0f690b9b791c90cf.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
