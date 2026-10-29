# sub_000AC6E0

- Manifest: lot 106, position 90; address order. Candidate span: 23 bytes (0x000AC6E0 to exclusive end 0x000AC6F7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9C6E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9BA60. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 23 bytes. XBE raw = derived PE = split = REA; span SHA-256 810deb7c7b89facad820da7726530bac52ad9a81805867a5bc87b99caedd10a8.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 23 bytes.
- Source SHA-256 542a35e60aed5d905b1d7ece9bc307c499f8da9ad2d827454537e3946c40103e; compiled object SHA-256 70274b335c0d41ec046d7f9466e168888c9470eb95abb6275507eb7bef713ba1; candidate object SHA-256 57ef41d570ce5055bdf4464e7138202c610f9a24602522941ccf02c171643c6b.
- GitHub Issue: #9916 (https://github.com/soldieg/ReBLACK-XBOX/issues/9916).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
