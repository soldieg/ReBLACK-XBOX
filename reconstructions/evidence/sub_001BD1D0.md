# sub_001BD1D0

- Manifest: lot 138, position 21; address order. Candidate span: 20 bytes (0x001BD1D0 to exclusive end 0x001BD1E4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AD1D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AC550. REA read_bytes evidence ev_42e154608ebe33ac67e14682013cf7e63304ff9a70e0e19eeb2b9cbed5f024b1 returned 20 bytes. XBE raw = derived PE = split = REA; span SHA-256 5fe0a83fd0659b75470d5b559281a3036b8fb2de12eda2deeb25b4a4df644e69.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 20 bytes.
- Source SHA-256 466d217b50c0160ad53b1f94c394f9124d2ba17754c581ff85a7a08df8648c19; compiled object SHA-256 980d5344083587981f0f3c9277884af518c51f7ec92d35e01c6d170a77d65a6b; candidate object SHA-256 5a4584902b95707136c6c036c3a8047fc41641210fb2f64ecc4ea61a81e96a85.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
