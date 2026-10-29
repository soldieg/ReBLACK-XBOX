# sub_001B9EF0

- Manifest: lot 137, position 68; address order. Candidate span: 17 bytes (0x001B9EF0 to exclusive end 0x001B9F01).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A9EF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A9270. REA read_bytes evidence ev_a1577b902204dca0bb24b23f3c59f1c0da7947bde3b1873e61e050a491da3656 returned 17 bytes. XBE raw = derived PE = split = REA; span SHA-256 0752ef242641a672c082de534c0f95e79207d8290b01a1fe74fdb0398ddee25c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 17 bytes.
- Source SHA-256 5439d0f65a20be604f6141920a3e8d645c503014771fa740b80cd4b089d61065; compiled object SHA-256 16eb4636aac447dc5631c0b6b77651291efc7a549305081c5ab8b01427b88582; candidate object SHA-256 6c3da3283e80d1904341b679c199f426fac57bae96ed4585546f818f1f824cee.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
