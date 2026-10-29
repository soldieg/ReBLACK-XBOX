# sub_001F9CC0

- Manifest: lot 143, position 93; address order. Candidate span: 59 bytes (0x001F9CC0 to exclusive end 0x001F9CFB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E9CC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E9040. REA read_bytes evidence ev_97742e206f9b27a3aa6533323881599733ac0bd0219805fe0b82c8bf69b26c5d returned 59 bytes. XBE raw = derived PE = split = REA; span SHA-256 269b74520c9acea2fbc1e6f7a06426dc27a203e91c3b3b5dc66c8c2aba20087f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 59 bytes.
- Source SHA-256 2da5606c6162a8edffa80ff03d35827d8c2fbcf0e7715863bb2b00c7072a5bd5; compiled object SHA-256 d54b31e9e0db75dbb032c8967825132f79edb3a8e7bcf570d7bcfc1faee0d43c; candidate object SHA-256 0378c24cade5cb47252899f9f7e9704dd87e489ff4fc6b5e025fdc896974b984.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
