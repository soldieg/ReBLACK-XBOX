# sub_0020FBA0

- Manifest: lot 144, position 88; address order. Candidate span: 4 bytes (0x0020FBA0 to exclusive end 0x0020FBA4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1FFBA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1FEF20. REA read_bytes evidence ev_0312a6e059f3b2299839636394d70d363670e30f472c8010311465bb38b43f2a returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 1697b83898cd08616eea05084a50bbbc26049c0a6cbc3633694539e763c94483.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 a363c98c2eb002d37896daf8c8a6750bd08fe42dfa6850bd394f7ea95653c6e3; compiled object SHA-256 4b0469f71c603dfec06270bf8c584f9a95d6e249ddc1e31172669148b4ea9d0c; candidate object SHA-256 e637951e773904f8c3a6173d8b5a59e96017ec84188825e668879fd52123887d.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
