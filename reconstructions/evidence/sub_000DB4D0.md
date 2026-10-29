# sub_000DB4D0

- Manifest: lot 112, position 59; address order. Candidate span: 9 bytes (0x000DB4D0 to exclusive end 0x000DB4D9).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xCB4D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xCA850. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 9 bytes. XBE raw = derived PE = split = REA; span SHA-256 506b6f3a1968415501a8e334f1c016c02b6c5abca5b17b2aefd436c3bbbc02db.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 9 bytes.
- Source SHA-256 6de55d073c6b09fc5357f5287054c77ee85b76aa1cd6ca9b2ae892191d8a6a29; compiled object SHA-256 510ffb6d0069fb64b65e9a139856df96021d2033c53b056b1ad48f62928020d5; candidate object SHA-256 a72cfb37604cfb35f2f8326ec48349ae498535d9fceb5f1a7889ee738539f4f6.
- GitHub Issue: #10380 (https://github.com/soldieg/ReBLACK-XBOX/issues/10380).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
