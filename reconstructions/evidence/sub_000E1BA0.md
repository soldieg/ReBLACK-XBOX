# sub_000E1BA0

- Manifest: lot 113, position 1; address order. Candidate span: 3 bytes (0x000E1BA0 to exclusive end 0x000E1BA3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD1BA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD0F20. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 4bc724f3b1d0caf4fe369c18cba3102e6c4ea057f63fe1587e3973134a7f755e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 7006427bb0ad97866efe462a4c596706b7961e688667103f3d3f028a5f944773; compiled object SHA-256 c7123be637fe73eb2532a4815f58536bdf394c5b087f6d5ea6e35adeb07dbc8a; candidate object SHA-256 0b72efe09d770a438b87622bf5297502337ebf2270c9042f108d863eb62c5f31.
- GitHub Issue: #10417 (https://github.com/soldieg/ReBLACK-XBOX/issues/10417).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
