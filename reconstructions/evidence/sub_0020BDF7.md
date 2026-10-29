# sub_0020BDF7

- Manifest: lot 144, position 53; address order. Candidate span: 2040 bytes (0x0020BDF7 to exclusive end 0x0020C5EF).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1FBDF7; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1FB177. REA read_bytes evidence ev_692dfa18552e81721659febdf53ab112e6ab40345d946dd9f356b2c8a3c9ad5d returned 2040 bytes. XBE raw = derived PE = split = REA; span SHA-256 14aa750f5050c8b21206e45646704bc4ea53697dbe8393f4e7c1b47e490e225d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 2040 bytes.
- Source SHA-256 49f0cf1459bbb0eb0042b080f716458117d3559bf7362b382d19d1c1257d3a9f; compiled object SHA-256 fdbda548431cb1503d5b477a69742d378d9817776f9acabd8295cdb8abd2a362; candidate object SHA-256 ade83af6ba70d155c93d98f0a42e3c937d8208fdd62afc3a72112feb7c62bd8f.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
