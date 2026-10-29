# sub_000AAE5A

- Manifest: lot 106, position 74; address order. Candidate span: 28 bytes (0x000AAE5A to exclusive end 0x000AAE76).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9AE5A; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9A1DA. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 28 bytes. XBE raw = derived PE = split = REA; span SHA-256 3101aa1a30d80fb9648b5a738b0584b43d1b15283dd0ce4060cd0fa8c281facb.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 28 bytes.
- Source SHA-256 ec3cacfe804874cb96d8673ce6c8b69250d2075d1656a261235ff72b1a2458f0; compiled object SHA-256 3dbb7922ef861db41870edeacc54c79acbcce9decc203f7edb289937bbf5f021; candidate object SHA-256 faaa8ac111e143cbfba13d574b2a94d6d540fb5a79615bc68500989b8014b456.
- GitHub Issue: #9903 (https://github.com/soldieg/ReBLACK-XBOX/issues/9903).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
