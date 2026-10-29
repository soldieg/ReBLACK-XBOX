# sub_001F3FA0

- Manifest: lot 142, position 57; address order. Candidate span: 10 bytes (0x001F3FA0 to exclusive end 0x001F3FAA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E3FA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E3320. REA read_bytes evidence ev_46c49889b292702b307864d7d157226095cb795a2c5f5809f5d7027084007bfa returned 10 bytes. XBE raw = derived PE = split = REA; span SHA-256 e46b5917fdbeaf6af66a2213d7770da571981c28ccb473485b37b04e096c4b89.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 10 bytes.
- Source SHA-256 b1597146e2f7f8dbaa7316bc1c279279763bf06b1682073f2db7c03eeaf89019; compiled object SHA-256 42cf2dcb04ee8f5815eed469621f52e5288a66d5922babaa783e6c0b9c87fdb7; candidate object SHA-256 4388c17ad6236b44d1d38a33a85f05ce39d1ed819dc9fdedd8d41c8c664d5c07.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
