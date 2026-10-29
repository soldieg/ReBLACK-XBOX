# sub_0027EBAC

- Manifest: lot 151, position 79; address order. Candidate span: 592 bytes (0x0027EBAC to exclusive end 0x0027EDFC).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 0027ddd3@0027dd96. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x26BC8C; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x26A3EC. REA read_bytes evidence ev_5fec354b1c98b2178539c62538ea2dead688339859ea761fec4fe6ebdec3813b returned 592 bytes. XBE raw = derived PE = split = REA; span SHA-256 be7dc56270c7989709893718207cffa04110f5a448ce9c9efa4ae5fc68140620.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 592 bytes.
- Source SHA-256 f10a0a3e14fbf919f50aefbe7726fa5f7908842ee7579efae5beea17dcc0baea; compiled object SHA-256 145c537354e6289b1e7658e8abf75a7f96e308e32c7175cd267c39dfea600547; candidate object SHA-256 d03e6a119be9c6a1fb2a1a2169f381e8c1f18ee9190a8de1529e3d1986860374.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
