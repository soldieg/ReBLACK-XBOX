# sub_000A2FC8

- Manifest: lot 105, position 100; address order. Candidate span: 14 bytes (0x000A2FC8 to exclusive end 0x000A2FD6).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x92FC8; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x92348. REA read_bytes evidence ev_20b8a8d722153def3f09f483e16cec6c5489778136e0ac1efcbcb008fef6441e returned 14 bytes. XBE raw = derived PE = split = REA; span SHA-256 a38bdee777bd37ca724dcb553122e2e654e1454193751dea8d61994d369ccd5c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 14 bytes.
- Source SHA-256 96a31d7ea60a2690544adb8f51f197ca777902fad814a033bab78201eb57f4fb; compiled object SHA-256 c36df14d6d366d70e02a3d6bc186e9ef484c31ee63319f1a6ffd309fac79e8de; candidate object SHA-256 b62e5766ea282977f070a3bfbdf3bc3bdeef5a30de2a4374d43069f879556865.
- GitHub Issue: #9835 (https://github.com/soldieg/ReBLACK-XBOX/issues/9835).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
