# sub_001F3DB0

- Manifest: lot 142, position 49; address order. Candidate span: 11 bytes (0x001F3DB0 to exclusive end 0x001F3DBB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E3DB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E3130. REA read_bytes evidence ev_6fc9aa0edc55129dfdd9006e1c45047e329d9acd45f4efbb98071f6ceda797ec returned 11 bytes. XBE raw = derived PE = split = REA; span SHA-256 c0fe8ea5f24866eeb055d8f80c2cfbcd3cd32809ed5143893adf25185b0e48ec.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 11 bytes.
- Source SHA-256 5ccd8ff3a5df9f7e6475dd983d5c49477a3480ea7de5b06a7560e661cc8691ac; compiled object SHA-256 8756453fa83978988436cf592391d81e96e50999fd4f8f477a7248f17f8513a1; candidate object SHA-256 44c75db590261b1e92f54fdbf3be2d8b844d736573bc32758ff130dcb32af386.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
