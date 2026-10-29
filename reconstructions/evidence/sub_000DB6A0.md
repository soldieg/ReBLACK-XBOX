# sub_000DB6A0

- Manifest: lot 112, position 75; address order. Candidate span: 3 bytes (0x000DB6A0 to exclusive end 0x000DB6A3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xCB6A0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xCAA20. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 b6856d8811ca113bb888a051e001bb59e96eec04ab85ff8e6165308cf4849ea5; compiled object SHA-256 2452e6956215dd6844d732dba252f6372939d5d699b9dfaa733178050d487da9; candidate object SHA-256 2ac8a73e65a78ea8757b264ed0eff7ef357010492079e0faa10e1a1344b60691.
- GitHub Issue: #10396 (https://github.com/soldieg/ReBLACK-XBOX/issues/10396).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
