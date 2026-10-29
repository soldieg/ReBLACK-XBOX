# sub_000AAE4F

- Manifest: lot 106, position 73; address order. Candidate span: 3 bytes (0x000AAE4F to exclusive end 0x000AAE52).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9AE4F; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9A1CF. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 350035d67bbad9ded6aeca4542efd660ac807e838bc409c091a6749844eb401b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 0ef7f2903c285b64688d79941a730fc46f0739351f6c78d801985005ce39ed54; compiled object SHA-256 9da5b2aafbfd1b291f8e1aef10bcf840482dd39be19ebebda8914236a9f3c397; candidate object SHA-256 fffbf12651a1fe17cc4796f24c6e55ee19290e6b5157417b30e6fa368b6cd2b9.
- GitHub Issue: #9901 (https://github.com/soldieg/ReBLACK-XBOX/issues/9901).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
