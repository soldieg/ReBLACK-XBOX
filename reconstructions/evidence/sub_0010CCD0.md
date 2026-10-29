# sub_0010CCD0

- Manifest: lot 116, position 22; address order. Candidate span: 57 bytes (0x0010CCD0 to exclusive end 0x0010CD09).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xFCCD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xFC050. REA read_bytes evidence ev_f48da4ab3d3942f21c3b06fd5d62cfd9384a4c65b9187588415534b88659c83b returned 57 bytes. XBE raw = derived PE = split = REA; span SHA-256 bc531fd822d9813dd4b3db68665192e3ba356f44662c30523070c1b5c2989486.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 57 bytes.
- Source SHA-256 62b10f81b5844205f64e9a2800f933475da971a1072507de5c9280b90f3224a2; compiled object SHA-256 9bd2b483cbc30ca93b0f297fd823eec1577f9ccad1b681d6e0801ba8df5331f5; candidate object SHA-256 09c023c0278c55a14a56460e2dacc06227be395698cfd22b5979c64b48b857e7.
- GitHub Issue: #5995 (https://github.com/soldieg/ReBLACK-XBOX/issues/5995).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
