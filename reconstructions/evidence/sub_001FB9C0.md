# sub_001FB9C0

- Manifest: lot 143, position 99; address order. Candidate span: 34 bytes (0x001FB9C0 to exclusive end 0x001FB9E2).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1EB9C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1EAD40. REA read_bytes evidence ev_fcc86e1a1722430a8583b31579004bd530e2ffa19e9ece4e45e234f19cf0d31d returned 34 bytes. XBE raw = derived PE = split = REA; span SHA-256 adab148a568388f52f74173e8ff98bf2fe21e382485a3dbebe74e77adabca436.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 34 bytes.
- Source SHA-256 301ca3df9afdd715b37c91b26d0e9b672a06368fb37995f6c8ee3808e150baad; compiled object SHA-256 2b61d674717b8244f7bc1235146d9796f7960d902c3f6a49b7ca6f00a240b4eb; candidate object SHA-256 3e994b97b92e8389a06c8bd0bb868ccd6157d14dfa5afc28f4cd445c677eb0a8.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
