# sub_000C1FE0

- Manifest: lot 111, position 24; address order. Candidate span: 18 bytes (0x000C1FE0 to exclusive end 0x000C1FF2).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB1FE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB1360. REA read_bytes evidence ev_1170f83c433f4613954d883277e925781c638dfc0a34bea8c82e4d4ebc1890a7 returned 18 bytes. XBE raw = derived PE = split = REA; span SHA-256 a9d9ae57d5209a0caa1263a2f10cfd1f67aa7a65c47e1fb83539eeb5a86ae4a2.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 18 bytes.
- Source SHA-256 2e5b69de882a6883e20ad4c3138177f9aca6e30580797b4c070c1597adb65ba5; compiled object SHA-256 991df853193249e2f474cc40a0824627646ce68aee22800237a2bf4f5764bbfc; candidate object SHA-256 dc56941ad3a8cca22730aacca2d829149a32705c3315810c6d08f68339592146.
- GitHub Issue: #10283 (https://github.com/soldieg/ReBLACK-XBOX/issues/10283).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
