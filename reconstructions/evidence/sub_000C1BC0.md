# sub_000C1BC0

- Manifest: lot 111, position 8; address order. Candidate span: 257 bytes (0x000C1BC0 to exclusive end 0x000C1CC1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB1BC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB0F40. REA read_bytes evidence ev_1170f83c433f4613954d883277e925781c638dfc0a34bea8c82e4d4ebc1890a7 returned 257 bytes. XBE raw = derived PE = split = REA; span SHA-256 fce41af6653a62f63b4b2a84f21c17e2ee9d1ab7275322aabd14f15ffa8a39e6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 257 bytes.
- Source SHA-256 fb86f700191be7a7c8da253bcb482f065f37fc4cd7bfef56218a95aa3217b723; compiled object SHA-256 70c66bea92a3d070d7186732d39575eb9f9d06b1aa39e164de161922c0758f9a; candidate object SHA-256 7b138eeba765967db1f2afe2d5a77f0d3ace4a4fd5d652e1a6c6a48ee2b4d18b.
- GitHub Issue: #10272 (https://github.com/soldieg/ReBLACK-XBOX/issues/10272).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
