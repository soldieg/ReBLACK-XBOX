# sub_001BBE70

- Manifest: lot 138, position 13; address order. Candidate span: 3 bytes (0x001BBE70 to exclusive end 0x001BBE73).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ABE70; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AB1F0. REA read_bytes evidence ev_6fc2def8cc08fb04be5d0a7d27ff523e9ae4d1c929ba867e34947e6f253140d1 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e598d0c3ba86d917b177d7adde0556aa99bc355543c57aee0a3e50b684dd7e99.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 8d088514373cb6fdf7e87fb84d93dd9b7d1fa05c16645e3f09a349a844fa0ffe; compiled object SHA-256 b4c83945258eaa6772bc7be810e0c0123f16f76dacb8986052e34d3b68bac35f; candidate object SHA-256 f59c64d61544e8948542a59a7f923621eecd290ecfbcb5f26ed2e7b7c517c220.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
