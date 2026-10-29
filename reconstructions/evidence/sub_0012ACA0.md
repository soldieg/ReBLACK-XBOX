# sub_0012ACA0

- Manifest: lot 119, position 82; address order. Candidate span: 4 bytes (0x0012ACA0 to exclusive end 0x0012ACA4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x11ACA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x11A020. REA read_bytes evidence ev_62a96185261c533da50667c12a7777dd40aea9563175b2f8daff6c0effcfbf8f returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 29ec8e21b36c26f52210b8a71bc3b496c1683b94169609eb9f22d13299f12d3d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 789caae00cf74cba2d0a5a89b4f0684060165559ed523e6daecc5350eb8d0d65; compiled object SHA-256 2e171708f069f40b9906b45d4b964f15c886b32d2ccb9383768f898febdf5da6; candidate object SHA-256 dcd05847cdb14b8536a6ab0f3a27eea054c756cc77c9e97666f9882533a98005.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
