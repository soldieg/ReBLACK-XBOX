# sub_0013DDC0

- Manifest: lot 121, position 21; address order. Candidate span: 13 bytes (0x0013DDC0 to exclusive end 0x0013DDCD).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12DDC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12D140. REA read_bytes evidence ev_8d0856bc43f0b9f39e8165195154c4b77af93c35f21d893de5987a9ca2fc2063 returned 13 bytes. XBE raw = derived PE = split = REA; span SHA-256 31bae1bf050a9371e0062d071e4bcdc06eea912e56bf8afdcb37d4f92e519a04.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 13 bytes.
- Source SHA-256 8cb03c5a001940e13f0eb80fc7e4e7da07111512e1028876186f4cdcf5a0f5b8; compiled object SHA-256 5cc313ddbb9a49639beddd2d56a47cd77af6f8e15f4efb3c14a72dbcbb4cb2e3; candidate object SHA-256 10ca8b3bd68b9393e1439f41b3d8107077eb91938e6af71b0fb4bc9dc848c7f2.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
