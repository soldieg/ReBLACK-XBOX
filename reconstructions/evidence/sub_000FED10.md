# sub_000FED10

- Manifest: lot 115, position 48; address order. Candidate span: 632 bytes (0x000FED10 to exclusive end 0x000FEF88).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xEED10; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xEE090. REA read_bytes evidence ev_053a47a022dc6492f29ff0b59db1ce36b55702940b869df5cc0b44f474231eff returned 632 bytes. XBE raw = derived PE = split = REA; span SHA-256 7d92ae204d718c7dcfa91f96011e822a10a8e51d6e827b767e53f08022b1d888.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 632 bytes.
- Source SHA-256 b518395c4a6f4b021f509298c79b3a09ab726b21922e6134c7a5bbe8b98360a1; compiled object SHA-256 8e2bb1baffc950c5f4bf1480eeb9862baddf8ea8a3b5478b7bc7821a2d4f5041; candidate object SHA-256 1f983598c3ed67dadb7dd4fe43b3720d9de01128b7678c4641f115954668ea4c.
- GitHub Issue: #5936 (https://github.com/soldieg/ReBLACK-XBOX/issues/5936).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
