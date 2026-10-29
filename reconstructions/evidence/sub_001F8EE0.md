# sub_001F8EE0

- Manifest: lot 143, position 81; address order. Candidate span: 19 bytes (0x001F8EE0 to exclusive end 0x001F8EF3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E8EE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E8260. REA read_bytes evidence ev_04afe4fe0d2b5fe9bd32a5c352822dec85cd5797a32aa8817534dd5aca014862 returned 19 bytes. XBE raw = derived PE = split = REA; span SHA-256 4f0764e179d466908ca0d1aadce635d3a320e67b130e7a89efdf18051420635a.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 19 bytes.
- Source SHA-256 83f6782ec87ceabe3162f039d085c155cb597ed6956ade7e47a44ebbe8ec34e8; compiled object SHA-256 d740590394f25ac87219195b7c4fcda72e06ad4de69daae04bee88a3a8800b75; candidate object SHA-256 15027590a3fac058774729800c25eac0e512deb1f6b05ed1dd6e93d4550da458.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
