# sub_000A39EC

- Manifest: lot 106, position 8; address order. Candidate span: 5 bytes (0x000A39EC to exclusive end 0x000A39F1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x939EC; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x92D6C. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 5 bytes. XBE raw = derived PE = split = REA; span SHA-256 81bcb9c51fffd414142b33c8a5671886219a46e4f90d15a4d642fe27a06e86a2.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 5 bytes.
- Source SHA-256 20aba82f23eed9d3c82630a8e12502ab66d290694283a4744148d24e7abc1ce2; compiled object SHA-256 bd11f2e232062c92eabd912e7d861db8efd9d6fa01edde1c1022f5250139f967; candidate object SHA-256 39b99a63a42a9236e82ef9a452d1d2be10146c6b7020cd5d06198778e3b01fa4.
- GitHub Issue: #9842 (https://github.com/soldieg/ReBLACK-XBOX/issues/9842).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
