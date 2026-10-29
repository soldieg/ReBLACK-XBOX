# sub_000DBA20

- Manifest: lot 112, position 86; address order. Candidate span: 28 bytes (0x000DBA20 to exclusive end 0x000DBA3C).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xCBA20; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xCADA0. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 28 bytes. XBE raw = derived PE = split = REA; span SHA-256 fcf08afcc0dadb4c4537ec03026620910be8e64078070b23e030c0ff993e52e2.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 28 bytes.
- Source SHA-256 ed80fcc26e7d209ec4be64181d2edac80040bdd1e056683213211585726d4762; compiled object SHA-256 8cc01ba5fff83dac783ec43432a4c266bb541308e914695a8c0977b8e9d89758; candidate object SHA-256 8f0d3fc492b113b67b065b8256e1219e568b2629e8f076dd521b7f7599cf8561.
- GitHub Issue: #10406 (https://github.com/soldieg/ReBLACK-XBOX/issues/10406).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
