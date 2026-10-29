# sub_0017CAB0

- Manifest: lot 126, position 37; address order. Candidate span: 944 bytes (0x0017CAB0 to exclusive end 0x0017CE60).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x16CAB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x16BE30. REA read_bytes evidence ev_bdc1f0a7a593cc69f329390934b9460c91501ba3748c63c13fd69e6ecf39632c returned 944 bytes. XBE raw = derived PE = split = REA; span SHA-256 0ce4c78acafc71cf995c77af37b4f8c74d73edf9345caf13f9de26afaec09114.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 944 bytes.
- Source SHA-256 77a17baef4a2edcdce68d98dbc08281b2341d590095429f271c37ffea34b5cb0; compiled object SHA-256 3f60d79500f5516e01bac7bfc4492efb2fe0d672cbbe20c7d81bcfe5b632c39a; candidate object SHA-256 ed14e733b565e21bc860ad1b5a47b61b318fd4f455726b69021d87d8716c56d2.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
