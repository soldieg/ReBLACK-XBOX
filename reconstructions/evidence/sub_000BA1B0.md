# sub_000BA1B0

- Manifest: lot 108, position 55; address order. Candidate span: 7 bytes (0x000BA1B0 to exclusive end 0x000BA1B7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAA1B0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xA9530. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 7 bytes. XBE raw = derived PE = split = REA; span SHA-256 503ddd24e5279822843475ef10c24648e5f42c3c5fa24f8aacc52f76ba16bcbc.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 7 bytes.
- Source SHA-256 043d343b045fdec96f9dd0a41db758389ef787b10241787bae23049c26546d7c; compiled object SHA-256 eed96b2fbefd4ee41a6471ad602d7f736ea25dd8a168276dec52c3ed4f20a8f7; candidate object SHA-256 e013bba61e2d2475880d1a732e513fa0baafc9a35e531a435fd58b12ce69f4c7.
- GitHub Issue: #10068 (https://github.com/soldieg/ReBLACK-XBOX/issues/10068).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
