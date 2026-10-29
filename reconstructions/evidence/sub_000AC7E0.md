# sub_000AC7E0

- Manifest: lot 106, position 95; address order. Candidate span: 23 bytes (0x000AC7E0 to exclusive end 0x000AC7F7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9C7E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9BB60. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 23 bytes. XBE raw = derived PE = split = REA; span SHA-256 330a034edf674cac08f868e33a5aa279cd2afed15ce68e1427c04afcc22fd796.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 23 bytes.
- Source SHA-256 127c7e5bd05a0dffdc1e4d2e273722fa363e186e90b2394f081789acb52f2ccc; compiled object SHA-256 2a7201682732218209bb5a088ca61523fde21802e2f1a14b5488aba2498fcfb0; candidate object SHA-256 edcc72d188a37857763dee0bdf88f91255b2ed5c470aff04c598a643c762ed37.
- GitHub Issue: #9921 (https://github.com/soldieg/ReBLACK-XBOX/issues/9921).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
