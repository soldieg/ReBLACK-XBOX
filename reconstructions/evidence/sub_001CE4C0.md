# sub_001CE4C0

- Manifest: lot 139, position 31; address order. Candidate span: 314 bytes (0x001CE4C0 to exclusive end 0x001CE5FA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1BE4C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1BD840. REA read_bytes evidence ev_91e2107989391dd4978fb49b7f8350a1fad718c71bdcd2bb0796907589d168ac returned 314 bytes. XBE raw = derived PE = split = REA; span SHA-256 79c20305fbe2a30672555f818b7d5a10326124d7f620ac726a5814d84cfcee73.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 314 bytes.
- Source SHA-256 e58f7bb3a65f70e917408d8a9dd240ae68e864731e68e514d856cfd73ea4fc7b; compiled object SHA-256 1483190d27d97886f1098996dd37b095b6f63890e1081a1c971fc70f0da2459d; candidate object SHA-256 2a5032aa55fc6132b7ba08706047f25a75f03470d4cbd951f1d4ef0c37e9ced5.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
