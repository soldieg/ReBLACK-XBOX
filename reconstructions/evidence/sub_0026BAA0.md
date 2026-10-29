# sub_0026BAA0

- Manifest: lot 151, position 25; address order. Candidate span: 536 bytes (0x0026BAA0 to exclusive end 0x0026BCB8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x25C220; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x25ABC0. REA read_bytes evidence ev_bbd5d88ce90c6046f9ef64d855053190a9aa9449cd7cf1160972cc0614ccb8e8 returned 536 bytes. XBE raw = derived PE = split = REA; span SHA-256 435cd243c0863d5b53ff4a9b8c71ed000bc067d00c05bb874610ca99bb927425.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 536 bytes.
- Source SHA-256 047b6412d029c058111edb6b9a859e1740e8cb1d05e6e1b15590343ef9a97228; compiled object SHA-256 ae973169318bbd58c2039b555373a54abb692accb557b23ca1b60f440effd0ba; candidate object SHA-256 fdfc6b480241088bd0d95925e9bcc7bc1def70bcf1703277a3e4f1481975f268.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
