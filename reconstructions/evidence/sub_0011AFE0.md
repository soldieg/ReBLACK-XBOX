# sub_0011AFE0

- Manifest: lot 118, position 16; address order. Candidate span: 228 bytes (0x0011AFE0 to exclusive end 0x0011B0C4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x10AFE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x10A360. REA read_bytes evidence ev_099c6728cdacf0c1abc9a16b6c9cf54914f65f7a7ac94b1327968461480b2f97 returned 228 bytes. XBE raw = derived PE = split = REA; span SHA-256 bf4f1c2ea9605dc17af5de869c5397aff1d5426b680ddb3b001f1bd1740de024.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 228 bytes.
- Source SHA-256 0007a1fca0a52ae2371fc0f16351c7182d953f169fa566fdafe6f439f1f2f82b; compiled object SHA-256 6f4be00b9646e091e50e406959ce35efeaee0e85d3f27d8ce8164d43d8915e08; candidate object SHA-256 d2c63026018b9aadc9dc0781f935a9b83fafbfc8bc5a28866a57f1db0579adf3.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
