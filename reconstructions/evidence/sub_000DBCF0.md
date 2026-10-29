# sub_000DBCF0

- Manifest: lot 112, position 89; address order. Candidate span: 29 bytes (0x000DBCF0 to exclusive end 0x000DBD0D).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xCBCF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xCB070. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 29 bytes. XBE raw = derived PE = split = REA; span SHA-256 f3d94ad5eb410f814e3f2be59e41e55a435c78b933c44e2059f2a4bed04cd922.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 29 bytes.
- Source SHA-256 b015d6a7e66fb4d3d7632ac943c68afcdac8465251bc8a48b569128f1c8d6d98; compiled object SHA-256 d0980ae176d1a59277a7eefab0413d4a8f03802e98b575fb0072ec608c960110; candidate object SHA-256 024657b72c9216ee77f116bda372ecd15884833c19140134e3817b115d49264d.
- GitHub Issue: #10408 (https://github.com/soldieg/ReBLACK-XBOX/issues/10408).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
