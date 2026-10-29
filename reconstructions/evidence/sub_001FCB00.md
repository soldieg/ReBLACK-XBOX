# sub_001FCB00

- Manifest: lot 144, position 11; address order. Candidate span: 47 bytes (0x001FCB00 to exclusive end 0x001FCB2F).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ECB00; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1EBE80. REA read_bytes evidence ev_88250b95d80bfe951843335e3a847265ba4242bdf835e4573d261fffa1fe1a59 returned 47 bytes. XBE raw = derived PE = split = REA; span SHA-256 063510d138653106e0ca72f181ef85454bf82305b1258172d956c678d8357e92.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 47 bytes.
- Source SHA-256 0b13df881ec9ba2ecc65cd21f2a6a2ec4d1cbe22638554e33208cff36a576541; compiled object SHA-256 2f9a47fe29e8a2042139abdc50675026939d93e0ee79d3e95761d4af9b1893b3; candidate object SHA-256 6af40d4a08a1a3bbced38e812aa013baa2963ecc81392d91f8c786ffd98ff7d0.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
