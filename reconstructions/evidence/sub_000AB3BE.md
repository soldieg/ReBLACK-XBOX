# sub_000AB3BE

- Manifest: lot 106, position 84; address order. Candidate span: 12 bytes (0x000AB3BE to exclusive end 0x000AB3CA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9B3BE; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9A73E. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 12 bytes. XBE raw = derived PE = split = REA; span SHA-256 351deb69191c912f88f4825c394783bef45f6e7169af8731369830b70d25ca7d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 12 bytes.
- Source SHA-256 0a27b2aa66401da7c9d645ae775995c0cf8fe4c6ddac33eb01745cc91ea67814; compiled object SHA-256 0ef7b17596777f3c427c818f909dc5db1e334b90e2a1632f8c676cd433c567f2; candidate object SHA-256 2d391abaab06eb787e984bd94c841df1cec0d8476520929597e72fe78e469c1e.
- GitHub Issue: #9911 (https://github.com/soldieg/ReBLACK-XBOX/issues/9911).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
