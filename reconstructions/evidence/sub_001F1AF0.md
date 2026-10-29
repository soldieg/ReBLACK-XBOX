# sub_001F1AF0

- Manifest: lot 140, position 58; address order. Candidate span: 3 bytes (0x001F1AF0 to exclusive end 0x001F1AF3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E1AF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E0E70. REA read_bytes evidence ev_e59da61fd7e56b0d95cd38abcd1e6c70d7033da273bef0491f4ec42be3877c8f returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 01cb47d078b4841b8408ec4fe278efa83115c6f6e101972987507d2b2b57dcf0.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 6efabd2c8c6f4a5ac41b4dae9fdb4017a7a68229b668279b074d4b10b1dda5cd; compiled object SHA-256 b751dec8456a9c7f9e143a87a396e24d61333498d442df5c4ef9e867a6c6053f; candidate object SHA-256 eb96b80cef8009efdaba61ffd7b72032af7bea06efbd9f6e68733e6635246f41.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
