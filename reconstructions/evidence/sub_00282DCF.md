# sub_00282DCF

- Manifest: lot 151, position 99; address order. Candidate span: 294 bytes (0x00282DCF to exclusive end 0x00282EF5).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x26FEAF; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x26E60F. REA read_bytes evidence ev_6d7027a893dc23f6256a80453bc03393388b56b17a77ae9d4badc0036f0850ba returned 294 bytes. XBE raw = derived PE = split = REA; span SHA-256 212583ec55b9d10c568d73582031011af1580ef082a98a0c7dcc5cc1fae7c0cc.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 294 bytes.
- Source SHA-256 336e497af460176e3d879635e362f509b2be9628edd316ce6f08bdebe528e56f; compiled object SHA-256 c554dc18ba3bfb0d6da9fcc904ff70fbc3c7b8527cb4039888f8d63b827cb97c; candidate object SHA-256 47dd4411dfe3f532721b46dceca37321d0870dc088ff7e2ec5f7d564d47e6f44.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
