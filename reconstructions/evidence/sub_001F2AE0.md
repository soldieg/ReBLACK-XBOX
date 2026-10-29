# sub_001F2AE0

- Manifest: lot 141, position 73; address order. Candidate span: 1 bytes (0x001F2AE0 to exclusive end 0x001F2AE1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2AE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1E60. REA read_bytes evidence ev_b1d6212f3553ce12e27af99bd87b6676670a653c508e834274c4d9b423253781 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 05d99285d4a135c243e4b7375d80abbd1602df8e686d050ea26a483d5a91ad1a; compiled object SHA-256 00e70691da5f9725eb4cb20a23dafecaf07fcea6725c544a5ca37749229a093c; candidate object SHA-256 5397efc0661c843411f8610c4c9e4ac75f122d013489afb8361a9675a38cb639.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
