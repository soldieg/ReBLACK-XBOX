# sub_001BA2D0

- Manifest: lot 137, position 85; address order. Candidate span: 30 bytes (0x001BA2D0 to exclusive end 0x001BA2EE).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AA2D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A9650. REA read_bytes evidence ev_f1d58144e2fbe7e942aa1a89beb36deaabb548260424b534b95d5c01d25f5b59 returned 30 bytes. XBE raw = derived PE = split = REA; span SHA-256 cd9b7582e76ec4ab4cebe2ed1e1ca15bed4622113f1358d4c3524dfd7bc1bb5d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 30 bytes.
- Source SHA-256 4cd36983166a6529bfe99b10d0ad22b83ae0b3563f705c9da2ca1f84003ef2aa; compiled object SHA-256 324579833b7b27d4971b1cd7943d63851150bfac98c4aabedeab255a0da7c346; candidate object SHA-256 3c4b6beaa0a4bc7181dba4a770cd1f3884958e44d20236611c6ea5262adae206.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
