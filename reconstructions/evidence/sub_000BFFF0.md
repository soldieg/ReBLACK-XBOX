# sub_000BFFF0

- Manifest: lot 110, position 17; address order. Candidate span: 1 bytes (0x000BFFF0 to exclusive end 0x000BFFF1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFFF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAF370. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 d9d887b29f94ebcb2f4493a43ff823eacd0fde11825b45a3056c3c8849e2f802; compiled object SHA-256 fba83d1ba3d9462fd56c814c67c62ee4bcf6e85923940e89f340b0210a7850e0; candidate object SHA-256 55c1d3dd10c7e88466cba0ccfe4e4ce8bb89f77f6f35ad81289dd22ac2fe2cf6.
- GitHub Issue: #10209 (https://github.com/soldieg/ReBLACK-XBOX/issues/10209).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
