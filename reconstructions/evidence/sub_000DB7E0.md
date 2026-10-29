# sub_000DB7E0

- Manifest: lot 112, position 83; address order. Candidate span: 27 bytes (0x000DB7E0 to exclusive end 0x000DB7FB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xCB7E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xCAB60. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 27 bytes. XBE raw = derived PE = split = REA; span SHA-256 cbdd62f9aa3e61b97b6e1e4f896b5d2030890bca1592406ec8e655ca9e5a5f18.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 27 bytes.
- Source SHA-256 e9f9c11738fe984069c45354b842d66b03877e51cde280f6ea6dd4ea819b58fc; compiled object SHA-256 f2ad8e60a93903beee3ea47cbe7f1a1b560f0dd65380d34dcb75984882d46609; candidate object SHA-256 db6f7a828cfc580224685bada52863a677b3944babb181c21737e36d189912f8.
- GitHub Issue: #10402 (https://github.com/soldieg/ReBLACK-XBOX/issues/10402).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
