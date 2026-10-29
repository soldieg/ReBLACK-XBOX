# sub_000C2BE0

- Manifest: lot 111, position 69; address order. Candidate span: 27 bytes (0x000C2BE0 to exclusive end 0x000C2BFB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB2BE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB1F60. REA read_bytes evidence ev_1170f83c433f4613954d883277e925781c638dfc0a34bea8c82e4d4ebc1890a7 returned 27 bytes. XBE raw = derived PE = split = REA; span SHA-256 cd92d0ac0896f55b15809206122b8217ebbb6dd640a622b8a9d501c4cf61948e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 27 bytes.
- Source SHA-256 e70ed70ab5d58e386c717a1a06c5c454c2205c5528fe9af33ff3e21ed84772ce; compiled object SHA-256 9f6c962eee1e72eb5aae95cacdee365d0f330c48d2a5e8a1e14ae0089dfe8869; candidate object SHA-256 12552d1fdf8041ebc83dcbb6787d0e1a14748ca60b54fba0e4b77b954e25fb6c.
- GitHub Issue: #10321 (https://github.com/soldieg/ReBLACK-XBOX/issues/10321).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
