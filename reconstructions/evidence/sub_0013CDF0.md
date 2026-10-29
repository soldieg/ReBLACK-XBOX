# sub_0013CDF0

- Manifest: lot 120, position 72; address order. Candidate span: 8 bytes (0x0013CDF0 to exclusive end 0x0013CDF8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12CDF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12C170. REA read_bytes evidence ev_2b7329f2d089e0d68a5a057153bda979feff465f4ad3b6c2558ad682f6f24676 returned 8 bytes. XBE raw = derived PE = split = REA; span SHA-256 ea64ce41cfe114d637fba347512652c530a1dd5e5a171d379111a316a6da026e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 8 bytes.
- Source SHA-256 5b80beef64b8a5d06c311050558d8ad026a4d46a423eb67b30c43f467cab43ff; compiled object SHA-256 f78874517f869c320435ad8c05492d01ff5cc6377f597916cea60c34597a5b21; candidate object SHA-256 07797c93e76f9112f2b876fb6e221adf33052d351860473267fd0b991cf38c0a.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
