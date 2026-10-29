# sub_000DB4C0

- Manifest: lot 112, position 58; address order. Candidate span: 1 bytes (0x000DB4C0 to exclusive end 0x000DB4C1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xCB4C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xCA840. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 adc020dd8cbb1a7031b9cae08a3824b92aa57d4f4481249236f01ebf37b08497; compiled object SHA-256 3da28770144726b10020386f6ce0409e7dd71b4dc6f1eaf20e9a04e5fecaa788; candidate object SHA-256 6e2bbf39d0fe8f9beb246a14cc9708b0e93d3c19dd9c74a80c92af86d2b1a7a6.
- GitHub Issue: #10379 (https://github.com/soldieg/ReBLACK-XBOX/issues/10379).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
