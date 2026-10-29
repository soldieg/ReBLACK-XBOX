# sub_0020FAA0

- Manifest: lot 144, position 81; address order. Candidate span: 55 bytes (0x0020FAA0 to exclusive end 0x0020FAD7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1FFAA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1FEE20. REA read_bytes evidence ev_57e97904617b534661e3952c7882dc4bf0ad0efca452c6f787c6edff9b7b39af returned 55 bytes. XBE raw = derived PE = split = REA; span SHA-256 24794da1f53c6eafdf4f47efd287b9de146e3ea939ef7187d39ad970bff699f6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 55 bytes.
- Source SHA-256 58d67b746973907244de92138bbe0c8ef609d11bee733fd13aefaadd9ec9c7f6; compiled object SHA-256 733fb3248660b4c512cff5dea7c91c3eacd86ec42fb468d20e467c153516bff7; candidate object SHA-256 5d44304015e6e430aeb03c06a5e2f5d73cc7f306ec76bd4287a9dc5f90b68621.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
