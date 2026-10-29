# sub_0015FDF0

- Manifest: lot 124, position 87; address order. Candidate span: 31 bytes (0x0015FDF0 to exclusive end 0x0015FE0F).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x14FDF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x14F170. REA read_bytes evidence ev_4b6cbeb64ec1d445a1d3273565061d1de68765a89127c3725278e334e0926fc1 returned 31 bytes. XBE raw = derived PE = split = REA; span SHA-256 4337310e39a94d9d2cf8c223a013fe7d7d66eae2e0c6cda9e5cad8c34a3eb090.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 31 bytes.
- Source SHA-256 7c0053ef84709561877c56bbfcf6f62073d1b36bbdb5458cc0f5658ca201df8c; compiled object SHA-256 a45cb6597b03f78d4caeb10916eb73a7276263efceb1351ef1559c57df6dcbd7; candidate object SHA-256 73f2a30c0ad9e2ed807eaa70d888adff37557d264fc512e595b361a3275302a6.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
