# sub_001BB3F0

- Manifest: lot 137, position 97; address order. Candidate span: 11 bytes (0x001BB3F0 to exclusive end 0x001BB3FB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AB3F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AA770. REA read_bytes evidence ev_610a84a0db91776e3a7ce3b60448cdb1e6ad3ac73aa899a98058fc3a173a3cf4 returned 11 bytes. XBE raw = derived PE = split = REA; span SHA-256 b4f4cdf04eb0c2a1c0da61cb186a5c4c8f8723b57032e27454bacc11db063d3b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 11 bytes.
- Source SHA-256 33fcceb8ce0eb08f898c2039d455c122131670ea28589ecbd47358c465defbf5; compiled object SHA-256 1d22d78b7c106cea16e6efad93b6ad971eab20d38ac624827cfb648284328fbd; candidate object SHA-256 54dda4edbb6e6d9b61d89ad05bc61187248cb01e7ff6b83adb2e794a27d22015.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
