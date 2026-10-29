# sub_000E1BC0

- Manifest: lot 113, position 3; address order. Candidate span: 4 bytes (0x000E1BC0 to exclusive end 0x000E1BC4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD1BC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD0F40. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 916ae10aa3fd76a4d5b25b2fb66e9df0fd04957c7ab10930268d1ed7808be689.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 084d0fb2a0b263e1c8f3572e5b95d4f0450a8e345702258154ff11fa2c4bdd27; compiled object SHA-256 c0eeef72f5741376ee387dc66d3c7e95fd6d2fe32b3103be79879a413830604c; candidate object SHA-256 c79293de63bd338a4ea300dcfdc30ce540a86ecffb519e784f70e51822c729fa.
- GitHub Issue: #10419 (https://github.com/soldieg/ReBLACK-XBOX/issues/10419).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
