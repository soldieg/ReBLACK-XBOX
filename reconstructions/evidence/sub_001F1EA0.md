# sub_001F1EA0

- Manifest: lot 140, position 82; address order. Candidate span: 1 bytes (0x001F1EA0 to exclusive end 0x001F1EA1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E1EA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E1220. REA read_bytes evidence ev_7c87a497ad70bc28ff4038bc68fa2e6ffd24ca3e5c966b2f7f3a10164fa6dde6 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 695d0ad512929ce1bc898a277260e411bb67fd1fa61566c621e5829bb389e6b1; compiled object SHA-256 eeadaf0a07883f1d923b1f20d1b091c73179c10af3b58c9e6e6162c079ee6c28; candidate object SHA-256 d0711776b98405948f428b945e3aa4d41a19d4387f1e0f0585a96cedf04ccd51.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
