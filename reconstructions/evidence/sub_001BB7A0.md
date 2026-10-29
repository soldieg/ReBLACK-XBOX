# sub_001BB7A0

- Manifest: lot 138, position 3; address order. Candidate span: 209 bytes (0x001BB7A0 to exclusive end 0x001BB871).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AB7A0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AAB20. REA read_bytes evidence ev_c96407994ebce92c23694b3b97ac3e630560c1a8dd7fd3e0fc128403bc4eda2a returned 209 bytes. XBE raw = derived PE = split = REA; span SHA-256 5afdfc1a6c5456e5c5764d5563badecc53712421589ea3fe260e3a519c78f93d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 209 bytes.
- Source SHA-256 45a06a1ce91e88adf60c2f2c72cfe1e77251415ded421f43c0f19dd208dec09d; compiled object SHA-256 277d01b0318042e1a2638510e1bb0690ac9783cdd7e408c844e3d8f54a15910d; candidate object SHA-256 b3e9aefa26bf4a2c48a7dff847d5a764d65b966a112149b7f5902c876e80c28b.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
