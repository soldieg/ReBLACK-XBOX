# sub_0014CCF0

- Manifest: lot 122, position 26; address order. Candidate span: 5 bytes (0x0014CCF0 to exclusive end 0x0014CCF5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x13CCF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x13C070. REA read_bytes evidence ev_e0ec315c610e44c48426af4ef5ef15e2af4ec88ce4380017d7dc824b9f0be954 returned 5 bytes. XBE raw = derived PE = split = REA; span SHA-256 e87ae4fcbf910fd0be6dac61be85b6d27d1e7fbcfb8f945b6f748a9d6e0759bd.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 5 bytes.
- Source SHA-256 21858c5acb3e91881b28ec52bb3293f3c041adf3dceb29b0fef3e9e39290d802; compiled object SHA-256 32210c4cb7eaa191bac96e5262e9632b547374a37427239377db0893e7116401; candidate object SHA-256 f239ee22f984d864c5939c2e65d77b87a4b879f85d11404d97cd4522913384c4.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
