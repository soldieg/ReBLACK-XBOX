# sub_001F2FE0

- Manifest: lot 142, position 14; address order. Candidate span: 7 bytes (0x001F2FE0 to exclusive end 0x001F2FE7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2FE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E2360. REA read_bytes evidence ev_f419c7aa39c675522dfddb0666b72634902956b5c9871300600bfef5f3793817 returned 7 bytes. XBE raw = derived PE = split = REA; span SHA-256 084fcf6b0d7b8f79eef652ed1add9518d63fbc031b9c783a7419729bfcdd1dc3.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 7 bytes.
- Source SHA-256 5315237d199d4f2c407c3fe59b1f78c7e68d8793e5b614ea644db92b68a7822c; compiled object SHA-256 73feb538a1df95614d010f36b32a52343e51aeef909bc4aa95861bf4d58f127f; candidate object SHA-256 220d33d943c329f80d1fbd6aa2ba2f6987f01549681cef2b11d9be110fa82b0c.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
