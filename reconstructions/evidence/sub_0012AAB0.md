# sub_0012AAB0

- Manifest: lot 119, position 68; address order. Candidate span: 1 bytes (0x0012AAB0 to exclusive end 0x0012AAB1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x11AAB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x119E30. REA read_bytes evidence ev_aec60a3e331bb869a81e7c4e0985d002b7629478c5a46d091858a03a395ca290 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 f211f10008603fa0da49664a17b50836af5dfeb75de1c5d7627175a1447ab11c; compiled object SHA-256 74244f7b959125f980429c3c6cb51d92e690e93b77fbcfdd4cea8c0bff2ca8ef; candidate object SHA-256 8aab60fb4f87f1726a604225f9652e8e4651d1efe6b3cf283a511a312b3d12ed.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
