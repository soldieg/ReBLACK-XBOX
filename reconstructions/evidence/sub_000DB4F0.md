# sub_000DB4F0

- Manifest: lot 112, position 61; address order. Candidate span: 1 bytes (0x000DB4F0 to exclusive end 0x000DB4F1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xCB4F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xCA870. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 4fa08489eb229857def6a6ed5aca2f9030af7eac21d65a7a877463742e9b5964; compiled object SHA-256 9990df2739fa104831174b04ce0605625e9d27d3f96ca893d42e7745f6876816; candidate object SHA-256 7f39f9e7af56a2e733ec6dd6c4f7b9ea3e2a9072a118aa1faa054495016d825c.
- GitHub Issue: #10386 (https://github.com/soldieg/ReBLACK-XBOX/issues/10386).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
