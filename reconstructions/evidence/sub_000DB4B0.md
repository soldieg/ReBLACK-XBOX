# sub_000DB4B0

- Manifest: lot 112, position 57; address order. Candidate span: 1 bytes (0x000DB4B0 to exclusive end 0x000DB4B1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xCB4B0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xCA830. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 2ed5b6e904bac11046bdc04fd93bf161333a9c6e7b2c0d63c10471d309730000; compiled object SHA-256 fa05b747f8eba29c6cb73c68dced28bbdafd22f19c556127ad1e68be0fe2ea88; candidate object SHA-256 2e90e2f90af4ee9e30819d87b8432d46b762d50159028315c450b51fa050a9bc.
- GitHub Issue: #10378 (https://github.com/soldieg/ReBLACK-XBOX/issues/10378).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
