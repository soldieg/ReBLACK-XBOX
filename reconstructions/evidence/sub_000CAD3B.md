# sub_000CAD3B

- Manifest: lot 112, position 15; address order. Candidate span: 11 bytes (0x000CAD3B to exclusive end 0x000CAD46).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xBAD3B; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xBA0BB. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 11 bytes. XBE raw = derived PE = split = REA; span SHA-256 aedb05b6461686d1f77170e725eb38cc444edc254950052cce468d8b516060bb.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 11 bytes.
- Source SHA-256 1b0073a2d332d6177e30f623d51ef79d3b1126066f6f1c47addd22f9cda14dea; compiled object SHA-256 eceb16eb1f3c91869b646c4303da60999a7597e1b945f49edd98e637aeeb7c8c; candidate object SHA-256 7da4a90e912baf06d2c174a8040174b77ef501d2172146ea49a9d8318e68de4a.
- GitHub Issue: #10351 (https://github.com/soldieg/ReBLACK-XBOX/issues/10351).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
