# sub_0018ABC0

- Manifest: lot 132, position 12; address order. Candidate span: 80 bytes (0x0018ABC0 to exclusive end 0x0018AC10).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x17ABC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x179F40. REA read_bytes evidence ev_c287e0ad5bbf218f5a60257f18bd6562c401a331aa38751e0e2158399a1c3755 returned 80 bytes. XBE raw = derived PE = split = REA; span SHA-256 d503c997398fbeae50d6dc81c1d86b0ffff97f8b6f919661a6f51aed66a6d76f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 80 bytes.
- Source SHA-256 aa0c57555df97a2c71e7f65ee422cf077fbe0c4abd10306d7fdad0787c1bd34c; compiled object SHA-256 04a970e2825bbba982a7c09ff88bb1601a21a259dfd4422d7fd099cde0d75803; candidate object SHA-256 c58179b3131eeab3dd6f4a5ba42b00997da7a11048b8f4e75d6ae699a21f9dfe.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
