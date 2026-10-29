# sub_001F2AA0

- Manifest: lot 141, position 69; address order. Candidate span: 15 bytes (0x001F2AA0 to exclusive end 0x001F2AAF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2AA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1E20. REA read_bytes evidence ev_69ebc6c892d6d51af0995e337bb92e82765bf2b3a7005585e58813e9cd9161d1 returned 15 bytes. XBE raw = derived PE = split = REA; span SHA-256 71f9177f8953e4ef6ca4a1ee99487b871189a512a6a6be4fcede8b79431d8456.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 15 bytes.
- Source SHA-256 3eef9b4542157ad491bd2d48a6bc43f73bcc713e492365acd7d556cd9a4890ca; compiled object SHA-256 18c16739b9a44a3600af86c2dd6be471e6a4e3613ff8d7d60e618ec02b20f0ba; candidate object SHA-256 6fe3b4a31d58dcf012657bede5f8f2c2c1ed191a5b73bc180b5be36a5e776d60.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
