# sub_001EB1D0

- Manifest: lot 140, position 15; address order. Candidate span: 19 bytes (0x001EB1D0 to exclusive end 0x001EB1E3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1DB1D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1DA550. REA read_bytes evidence ev_49160887d042c1958a287236ce2facb89ea5ccbe5405a18faa15bccdf745987d returned 19 bytes. XBE raw = derived PE = split = REA; span SHA-256 f0a7d97a0370373be2ea553bb46c8a037cb412b3739fb5dab6af37251a93d113.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 19 bytes.
- Source SHA-256 7f9247cea364dbfd04ee47a9bfeaeba8e4448dd5a4311a0c48698b402e09240d; compiled object SHA-256 9b992979c3d837e5c459d2ed2e7c3da08293c6a463d5964304229b12decab925; candidate object SHA-256 faaab76791f2b49df590801037657b869188242bfffcbef70c7259933e86c70e.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
