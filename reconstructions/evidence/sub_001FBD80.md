# sub_001FBD80

- Manifest: lot 143, position 100; address order. Candidate span: 88 bytes (0x001FBD80 to exclusive end 0x001FBDD8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1EBD80; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1EB100. REA read_bytes evidence ev_b54b9e36de4124ddef3a6bfa4ad866d72eb4fae72416aaad193c8d1ffe7b083a returned 88 bytes. XBE raw = derived PE = split = REA; span SHA-256 ce2e5b8281ed261be3752556858d46e9ccb489a45d795e5c61681b74d5133efd.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 88 bytes.
- Source SHA-256 274a33509350a3dedd76482c865ff850c58252094de9c040d78a6a104202973c; compiled object SHA-256 f6c7daa51e57f1f8b58cbc4f5d670b4da6af2ccfda805fa39c68946d660f361e; candidate object SHA-256 0c4773a8a4753a5ab9856c4c0ff302dd834c0cf163703bfa4c429c67119b3d69.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
