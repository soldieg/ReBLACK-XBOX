# sub_001F2DB0

- Manifest: lot 142, position 5; address order. Candidate span: 8 bytes (0x001F2DB0 to exclusive end 0x001F2DB8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2DB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E2130. REA read_bytes evidence ev_e3c50f8e99e9e1b2e253b6e8d4326a47e8a62b5bdea67546444ef5093eda6a71 returned 8 bytes. XBE raw = derived PE = split = REA; span SHA-256 4f6d79cdf98460543c9d7246edb8e807bea3d3980cafe0d9df95de2605925636.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 8 bytes.
- Source SHA-256 b11c59c7467dc0802e5771b2f6694d0ecfadc4275dcd30045e52432468d38e34; compiled object SHA-256 22fdc8659674853e610f0f04e0da347dabda3763d4f2a9edf9e473380f95ef48; candidate object SHA-256 98e67487e6d440fe205e4bccb154f519d123c890be9ff642b488ebe464604e4b.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
