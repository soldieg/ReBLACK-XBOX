# sub_0023FE0B

- Manifest: lot 150, position 100; address order. Candidate span: 491 bytes (0x0023FE0B to exclusive end 0x0023FFF6).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary.
- Ghidra 12.1.3 resolves FUN_0023fe0b in XMV; its 305-byte body is non-contiguous at 0x23FE0B–0x23FE5D and 0x23FF11–0x23FFEE (REA evidence ev_8547afac32f81c25e3171d15babcb3ffd6dc1fe5aa78a42ba07549521bb15480). The body span is 484 bytes, while the manifest candidate span is 491 bytes through 0x23FFF5; the full-span byte match is not a claim that all 491 bytes belong to that Ghidra body.
- Direct references list 2 incoming call sites; callers: 00240112@0023fff6;0024018b@0023fff6. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x2302CB; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x22EF2B. REA read_bytes evidence ev_291581efe5a491f7e53d04c4d9e6f66b9f6cc1127314332852357bb4071cb23a returned 491 bytes. XBE raw = derived PE = split = REA; span SHA-256 45484a40f16a9e8bbd6c35d8b81b0c3706a3f9da78ed80e0d2c40ffb0b50e1dd.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 491 bytes.
- Source SHA-256 cf874f32673383af69e232c8a9246c8e9cbf821929aa55020e86991866cec46c; compiled object SHA-256 fbe41273e75e7647e7d160851ef6c68c9aba8740dc457f899024b42401b1af75; candidate object SHA-256 04e67c9225a71c2e32ab7d700e725f4491138f0e58087fe697ba288784fc9ba9.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
