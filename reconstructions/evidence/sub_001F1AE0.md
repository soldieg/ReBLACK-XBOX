# sub_001F1AE0

- Manifest: lot 140, position 57; address order. Candidate span: 3 bytes (0x001F1AE0 to exclusive end 0x001F1AE3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E1AE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E0E60. REA read_bytes evidence ev_cfb10271ebde6c182086c0a4d5cdca0b492b8eca9da5c75e2602d748dda9f8e6 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 01cb47d078b4841b8408ec4fe278efa83115c6f6e101972987507d2b2b57dcf0.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 06cadbaa79a583a3c784885c05beff694bc63350ef8b541e892b8faae8bfbfd4; compiled object SHA-256 503596c29007b7861e69f38134c671d2ec5794ca5dcc3d9ffd908886eaa76fe2; candidate object SHA-256 a742ec724c4bed6230d8f808951c1f1b43f4e438421025bc22449912eaf98e28.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
