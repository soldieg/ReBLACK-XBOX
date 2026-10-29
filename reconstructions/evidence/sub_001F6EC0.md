# sub_001F6EC0

- Manifest: lot 143, position 69; address order. Candidate span: 10 bytes (0x001F6EC0 to exclusive end 0x001F6ECA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E6EC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E6240. REA read_bytes evidence ev_2b21d0236698ba05580680e0a4f31562bd843d688bbd6b4137bca33ad4f5abf7 returned 10 bytes. XBE raw = derived PE = split = REA; span SHA-256 002048c45c286e8f6b8e2484a2c652e6ab7987fd489dc837521a2d74b58ada56.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 10 bytes.
- Source SHA-256 0efff974f78e1ff16cf1a59bbaa56cdb4a8e8ec479103fc5fb186766c3719b7d; compiled object SHA-256 4fa6cb8f8a46db144d87355206314b7b829eef40013a1da285627168c0f4f6a8; candidate object SHA-256 935a26db0f8decdb903abfc595d76796890d377faa21b7c59d8106aae7242a32.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
