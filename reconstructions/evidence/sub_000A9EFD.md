# sub_000A9EFD

- Manifest: lot 106, position 69; address order. Candidate span: 6 bytes (0x000A9EFD to exclusive end 0x000A9F03).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x99EFD; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9927D. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 4090934237a3670d54153d4496020a2062c4760bbf44093e154bd116c7f31bf7.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 bcdabf07ebc62ff1161b7a1f525984fec75b4a24afcd97bc46201b4d14da513e; compiled object SHA-256 f8a697dd0f03836260f000e9ff352904cc2b5da35a3747ebd53b5657cc774c51; candidate object SHA-256 51db537db757f621a8b06aa308eb6481fecabebddfbbfaa470963ebe9c86c4b3.
- GitHub Issue: #9897 (https://github.com/soldieg/ReBLACK-XBOX/issues/9897).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
