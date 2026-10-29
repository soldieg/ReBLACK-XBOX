# sub_0012ABA0

- Manifest: lot 119, position 75; address order. Candidate span: 3 bytes (0x0012ABA0 to exclusive end 0x0012ABA3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x11ABA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x119F20. REA read_bytes evidence ev_4a5114d9d544ebc1bb61b774a36c212bb0daf306fdc29f7ef402d903f81900cc returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 1046775bf43d2d73d6a10c9d17a2a33dd3ea118279d4924b2408d38e9d7abf8f; compiled object SHA-256 2a17eb70f78abbf60fef5760de5a6f651ef3de476615b7a8c9f882cdd8d61d73; candidate object SHA-256 92fc6688cf79f59162f385260b70641e6b97c1e11e3ff9d92adcf71233bcc936.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
