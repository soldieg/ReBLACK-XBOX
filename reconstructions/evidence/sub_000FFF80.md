# sub_000FFF80

- Manifest: lot 115, position 52; address order. Candidate span: 438 bytes (0x000FFF80 to exclusive end 0x00100136).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xEFF80; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xEF300. REA read_bytes evidence ev_053a47a022dc6492f29ff0b59db1ce36b55702940b869df5cc0b44f474231eff returned 438 bytes. XBE raw = derived PE = split = REA; span SHA-256 16427b2de37aa24b38ce2b8ab45ce7097939074acc04bdd1a1eac4801bf64d1e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 438 bytes.
- Source SHA-256 1d49136b8e4e816f07b731de7f3c79b2bd18b79334932ff8a54d30e9c5a9ccf0; compiled object SHA-256 577ea6edc6c5d6c6ae4cff62ced72dd686c6960bc280c47a571d48cf4ad98246; candidate object SHA-256 f8bf48754672aa118c91e222bf8bce296a79baf5b05ebe7545962c138b4e38f3.
- GitHub Issue: #5940 (https://github.com/soldieg/ReBLACK-XBOX/issues/5940).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
