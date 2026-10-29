# sub_000AB1CB

- Manifest: lot 106, position 81; address order. Candidate span: 103 bytes (0x000AB1CB to exclusive end 0x000AB232).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 2 incoming call sites; callers: 00021650@00021600;000220bd@00022060. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9B1CB; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9A54B. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 103 bytes. XBE raw = derived PE = split = REA; span SHA-256 f3d289217b65b75936aaa0085b701d6debd8d4314b8268e0017ebf44bec462d1.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 103 bytes.
- Source SHA-256 9be28d75b69e283fbd7f0f39c854d72466be8f97ad97a6a7cf7bdd104ae63cc4; compiled object SHA-256 3491d1eee0552f14a3ea077ef21ad4c946391c7096e86299540e0a7050f6482c; candidate object SHA-256 83fefd67afc1df788e6a6f54d1e48e1bd8b7617fac0f9f7e16081091efdf8e02.
- GitHub Issue: #9909 (https://github.com/soldieg/ReBLACK-XBOX/issues/9909).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
