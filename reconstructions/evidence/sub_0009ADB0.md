# sub_0009ADB0

- Manifest: lot 105, position 79; address order. Candidate span: 160 bytes (0x0009ADB0 to exclusive end 0x0009AE50).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x8ADB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x8A130. REA read_bytes evidence ev_20b8a8d722153def3f09f483e16cec6c5489778136e0ac1efcbcb008fef6441e returned 160 bytes. XBE raw = derived PE = split = REA; span SHA-256 8ebaf8dd9ee1887c1822b57630b16bbc32d983f0cbc022043fac5ea7c6d260b5.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 160 bytes.
- Source SHA-256 f3c938295b6923fae76a79def0391176c654c8105cb918687ef4889d6bd40e83; compiled object SHA-256 77f78718a239a124ccadc96687ab7bd112a417eb163aeab3b3556c4b1311dd22; candidate object SHA-256 b50586389bbb16a7a1bed0889f2fc918ea426295d9716fc6093645f3149d6085.
- GitHub Issue: #9819 (https://github.com/soldieg/ReBLACK-XBOX/issues/9819).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
