# sub_000BEBC0

- Manifest: lot 109, position 26; address order. Candidate span: 3 bytes (0x000BEBC0 to exclusive end 0x000BEBC3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEBC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADF40. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 4bc724f3b1d0caf4fe369c18cba3102e6c4ea057f63fe1587e3973134a7f755e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 c200088b4e92c763548ed5b92af4e21e889b301f9539238de3c4b67476f9aafd; compiled object SHA-256 d91b98d65488c0a84e2fdd0695e2aba5f535bb97e4719c57fc2713d5b36a5400; candidate object SHA-256 dbfdf19e9a56c74002e2b84c4884ddf6970158dc762d960e909685194b986918.
- GitHub Issue: #10132 (https://github.com/soldieg/ReBLACK-XBOX/issues/10132).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
