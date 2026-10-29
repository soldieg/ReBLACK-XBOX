# sub_0018AED0

- Manifest: lot 132, position 14; address order. Candidate span: 29 bytes (0x0018AED0 to exclusive end 0x0018AEED).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x17AED0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x17A250. REA read_bytes evidence ev_5728f8586506d5ca7a5b17f5553d215d83ed568a97966f72d62021978f1cef42 returned 29 bytes. XBE raw = derived PE = split = REA; span SHA-256 1c074c164fc9b815a0270110bd91b1edea81cdb8cb19e5a3a7d5b5a4b3828d9c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 29 bytes.
- Source SHA-256 2f890b57b4524f06623d1ea05c29a0a2f9cd86fe215bd89bd81f61f4b8bccb67; compiled object SHA-256 2ec87b74b98fbdb4f61a7332f451b204b3781191469e7c5f7a9750f0f701381d; candidate object SHA-256 447ea0ed9eac625794266c4ea1d5e356eac0c2c966fb8cbcd4f46dc1e160b18c.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
