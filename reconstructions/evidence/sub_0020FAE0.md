# sub_0020FAE0

- Manifest: lot 144, position 82; address order. Candidate span: 5 bytes (0x0020FAE0 to exclusive end 0x0020FAE5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1FFAE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1FEE60. REA read_bytes evidence ev_3ce8b000e6d2e5e9d51f55c12ce5c1ebd72864f10e8e81dea5038d27c448981d returned 5 bytes. XBE raw = derived PE = split = REA; span SHA-256 5fed5afb29946811bf02359627a94bc01d08d31b779528feaadde3866af9c855.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 5 bytes.
- Source SHA-256 3a07aa366ba031e13c0ba930c3992dbac4917d60732def798c13e9ffe8b796a3; compiled object SHA-256 618ddcba4f96e1fb27a63e251e6879c8f07a310a0c418543e4a6ed39c90002fd; candidate object SHA-256 5fac53a9aec34556e1c762adedaa71bba90bd06a774de46164a62b757bfa7e4e.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
