# sub_001F8FF0

- Manifest: lot 143, position 84; address order. Candidate span: 67 bytes (0x001F8FF0 to exclusive end 0x001F9033).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E8FF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E8370. REA read_bytes evidence ev_37483e06b2adbbcfe76ff3975f3f4722fb19ad43a3d231599da2b0de10574478 returned 67 bytes. XBE raw = derived PE = split = REA; span SHA-256 f31b9900d1ebb24c974c65c3cd5328598011037e5ac441b83cf1113b8503f02c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 67 bytes.
- Source SHA-256 915baf4f990f473a75ac0e636247847e4d13be2a7441318fc5f068446c7635fd; compiled object SHA-256 a124379a9c860f7fca1729586964191ba00df4ffa52fb9b926102bff88bc1edf; candidate object SHA-256 e10add3dd835ddfbd769bfff119c54979dda9d9333bc510c338391961dc9e88b.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
