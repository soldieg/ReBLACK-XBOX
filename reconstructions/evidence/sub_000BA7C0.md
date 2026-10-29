# sub_000BA7C0

- Manifest: lot 108, position 66; address order. Candidate span: 26 bytes (0x000BA7C0 to exclusive end 0x000BA7DA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAA7C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xA9B40. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 26 bytes. XBE raw = derived PE = split = REA; span SHA-256 6b0b4f40b59658afc3ba03216622932cf8a6496a84a9838cdd4af1cf12a84497.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 26 bytes.
- Source SHA-256 6fb5b7a011105ad994d57fe676cdd7c028ba1f976302ee83f533507d6b94607d; compiled object SHA-256 194cf98d1cfba7c15d930cd7aec6198270b6a9ee612a35eb3f8da854c6202fd6; candidate object SHA-256 56068586ae391b5c4c2d8a023b58685e778d1563efdbadb243ee4107d228a92a.
- GitHub Issue: #10078 (https://github.com/soldieg/ReBLACK-XBOX/issues/10078).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
