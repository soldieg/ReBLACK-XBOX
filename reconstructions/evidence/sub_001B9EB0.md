# sub_001B9EB0

- Manifest: lot 137, position 66; address order. Candidate span: 27 bytes (0x001B9EB0 to exclusive end 0x001B9ECB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A9EB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A9230. REA read_bytes evidence ev_ed5f2d0eace9e022efb948823799a92d43adb5bc04caad2c524d272d84f803a7 returned 27 bytes. XBE raw = derived PE = split = REA; span SHA-256 0961d09d83170b968be62fbb7ac3fa6212274827cc8dcd89ef3db2b81457fed6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 27 bytes.
- Source SHA-256 a50806f99d4ba023b4af2c39f433b81a4a0e49d2cfeb920c55acfcbdfd966421; compiled object SHA-256 fe24aaa31bc257dae9e96e2327d40f68c959f0f60839e24a78f9628d3a2babd2; candidate object SHA-256 3f247c3c0db76a4f0b5661afad6b1603a6a0518d635cc9504c25a7fc454c48bb.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
