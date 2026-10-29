# sub_001BB0E0

- Manifest: lot 137, position 95; address order. Candidate span: 19 bytes (0x001BB0E0 to exclusive end 0x001BB0F3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AB0E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AA460. REA read_bytes evidence ev_5217a35ac3cbca6c4fe5b03920193042eeb4e5505589f1e6edc0f54773abd3cf returned 19 bytes. XBE raw = derived PE = split = REA; span SHA-256 ac250f2d94c8b4c51d5b2a935cedf830e17f676a629534423124b17b95e589a6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 19 bytes.
- Source SHA-256 53374b683b9b93b1999cecde4e222d0c36ce57d83a6bcf10776669223f0e725c; compiled object SHA-256 5af5dc8cda02581565b4d519d8331aa02f3867e6a01b2508d58414f331f6eb87; candidate object SHA-256 e2135c7994c75951f9190b4b61951302df9bcb49e1c8cc0e9cb3cb3620e8b85b.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
