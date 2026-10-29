# sub_001B5EB0

- Manifest: lot 135, position 74; address order. Candidate span: 6 bytes (0x001B5EB0 to exclusive end 0x001B5EB6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A5EB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A5230. REA read_bytes evidence ev_7e2db73c390ab789053e38cabbcb753dba794bc8622a8b86674947124e034e64 returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 491fd347216c9bbae36837ea422dc8d4d5bd6a8c889ee1b18a90650dd7dbb1b6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 bcdac558e0e62e9f05c509953da7312ee33a865dd9775e928b1df001a2220865; compiled object SHA-256 3d6b30b645a0bf1fabcebd43b3e6f1e63f127ea50ec55f3d0c4a19dd62be1a3f; candidate object SHA-256 767e0c9ff1c4b5d69df4a3ceae0d23daf8a6d550b0ad9e2fea9891e0d86c5741.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
