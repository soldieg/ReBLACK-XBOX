# sub_0012AAC0

- Manifest: lot 119, position 69; address order. Candidate span: 3 bytes (0x0012AAC0 to exclusive end 0x0012AAC3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x11AAC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x119E40. REA read_bytes evidence ev_6274d8b50643c1d00ea40e2daa0b748a310999c00165324d3c1e3bda4415bbc2 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 5645c94f511c879de164eb15bc28c64f617e529f7165744b7665ae9718000f92; compiled object SHA-256 b76f356335972800043f5564cc7c3b0d206a2e17c7ee2bb3a3abb44640c6885f; candidate object SHA-256 abbdf7e2b897f9cf95a31f3eff07423f92db1358e1ac770d25c9510895c3080c.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
