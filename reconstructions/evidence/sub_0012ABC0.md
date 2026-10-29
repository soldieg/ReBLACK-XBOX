# sub_0012ABC0

- Manifest: lot 119, position 77; address order. Candidate span: 3 bytes (0x0012ABC0 to exclusive end 0x0012ABC3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x11ABC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x119F40. REA read_bytes evidence ev_a3d72dc7ba0a85077bfa844ac2d12f1531bed47c94c977b8721b011f23881e15 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 4189ee6d5bb0b80e383e5edb82547ec50b40885629ec33881843d612dd7f6277; compiled object SHA-256 6f4b769ff833004ad8d84ed0c58cbb0e99ee387457f841ee8548df6e4fb26652; candidate object SHA-256 1d184e787f818a7849a2abe0ffbad950d878cba8687c2272b5622a41cfd16a80.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
