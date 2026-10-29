# sub_000AB0FC

- Manifest: lot 106, position 77; address order. Candidate span: 3 bytes (0x000AB0FC to exclusive end 0x000AB0FF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9B0FC; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9A47C. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 350035d67bbad9ded6aeca4542efd660ac807e838bc409c091a6749844eb401b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 46942f476a341cfe29505d87057199b280e60a4f863c86fcaa018b803dbb586d; compiled object SHA-256 1603090e3f7cc67310bf658ad90cba0427f05de0799adb9ed52da520ad5b91a2; candidate object SHA-256 0a1d14f8b8619afeff8a2610034afbf7fe6e3328e684fc60b889cb8489d27df2.
- GitHub Issue: #9905 (https://github.com/soldieg/ReBLACK-XBOX/issues/9905).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
