# sub_001BB8F0

- Manifest: lot 138, position 5; address order. Candidate span: 38 bytes (0x001BB8F0 to exclusive end 0x001BB916).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AB8F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AAC70. REA read_bytes evidence ev_8ce6a62aabe924d9c99d4c5d02e93ae729ac3c6e95c60e1a7be76cb9dc8af442 returned 38 bytes. XBE raw = derived PE = split = REA; span SHA-256 edeb2dc071e30ee8451d93e7dbc55db117005a135f33a3fe0c645f3afb51b7e4.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 38 bytes.
- Source SHA-256 0cfd2511ee11d7ff7ff3fda76ac38095cc28962a679b3a7f371d532fe28706c6; compiled object SHA-256 dd4b28a6660004f891f856e24a73543406adb94e64ec2af6952c6b3a9ab1d11a; candidate object SHA-256 8be1679dd56b842c200436ea4782f27d66be40a9b250ffff35284affd8fa8a76.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
