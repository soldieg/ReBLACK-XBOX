# sub_0011BAF0

- Manifest: lot 118, position 24; address order. Candidate span: 272 bytes (0x0011BAF0 to exclusive end 0x0011BC00).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x10BAF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x10AE70. REA read_bytes evidence ev_8825dbbcbfb328934f464eb3ab6b182756fa4341fefa9de9c97d8ac0d1bda7a7 returned 272 bytes. XBE raw = derived PE = split = REA; span SHA-256 10fe6f7846fdb8acc594368b079e435ab7cbc35cc551c2dcd1eb6851edceaf4c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 272 bytes.
- Source SHA-256 02888d3edab383a3d47edc48fae07dc25a16872a6acca356ccd1e1ee68bd6bb0; compiled object SHA-256 19d4373073332c1844886797052f612d93ee8821fd44c10f5073955a74e69b13; candidate object SHA-256 9c209e8c6676149365531ca0b70642542ba915dbaf832c71eb4c7a916aaf6fb6.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
