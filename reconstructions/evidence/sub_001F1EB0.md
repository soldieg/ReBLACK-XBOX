# sub_001F1EB0

- Manifest: lot 140, position 83; address order. Candidate span: 11 bytes (0x001F1EB0 to exclusive end 0x001F1EBB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E1EB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1230. REA read_bytes evidence ev_b086e538189b9ad6a9acde379328e432684700c8068f77fd38b8bc1b3b98c3bb returned 11 bytes. XBE raw = derived PE = split = REA; span SHA-256 16e285aae6f250c13ee7bfa43b0eaec38d588445f1d94c8dcea50842ee73faa3.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 11 bytes.
- Source SHA-256 79faf5f04faf5fd292917f221bed251d2dd9f16474eb0768d91e55c493bb0a93; compiled object SHA-256 f3509680b0552d8b861a56c0c70c5698addb129d52b1f49a1dc96bf5580af971; candidate object SHA-256 89c814a81456a1b1e008222cfb86da3d0515c532f316a1d9ce35008bab4d7d08.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
