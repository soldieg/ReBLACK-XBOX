# sub_001B5EA0

- Manifest: lot 135, position 73; address order. Candidate span: 6 bytes (0x001B5EA0 to exclusive end 0x001B5EA6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A5EA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A5220. REA read_bytes evidence ev_81d0dd57a08494a53cdbf021025be99663bbf856014f34fede0ff3c11fffacf9 returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 21faa16607cb70438711aab3fa582829af50aa15d5946524996fc7aa8a8e4e6d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 732072814b9fee1ccb602b9ad215949feb500cba6ba2c0f7c2f455f06d4602e4; compiled object SHA-256 51d15225a0148bf03dbf33d1df0c19e7887d1d3164140576add3983f22b83f75; candidate object SHA-256 7b6b2de6ec1269c48d2dfe103c91eef8665feda8f5e11fd5c350a063e80c91b3.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
