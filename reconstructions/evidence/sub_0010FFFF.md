# sub_0010FFFF

- Manifest: lot 116, position 39; address order. Candidate span: 1 bytes (0x0010FFFF to exclusive end 0x00110000).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xFFFFF; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xFF37F. REA read_bytes evidence ev_cb0d5132ff7b37536860be3e3bfc9ee7a5839ba42979b31fd9b4e809bb8bd07e returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 5c62e091b8c0565f1bafad0dad5934276143ae2ccef7a5381e8ada5b1a8d26d2.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 02921f36900c5ac50557628d336b902a8ead2b16f6f358af94ac37a7acd69ddc; compiled object SHA-256 b2a6c53319a6f047f37a7953873b9aff60107a8ddd030475d6a7f3a34f57dc58; candidate object SHA-256 23ac3eb5ed1a150b89e05cd09a7d91a5ccf1a5156e57ea2eaee89fd39ff2c0ab.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
