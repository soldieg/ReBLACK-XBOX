# sub_000BEC80

- Manifest: lot 109, position 32; address order. Candidate span: 8 bytes (0x000BEC80 to exclusive end 0x000BEC88).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEC80; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE000. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 8 bytes. XBE raw = derived PE = split = REA; span SHA-256 24d074f50c0c9d42151c9574ca3fd2e405cb94508732ea5431b6bea00df7b73a.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 8 bytes.
- Source SHA-256 af68609e6f000dc7e048845f572a973db603579b24b25f5c04675e4fab53472e; compiled object SHA-256 fd11074c1dddad1631aa352fbd7a0203d6936cf0416ca7cc712db9767b34f511; candidate object SHA-256 5e174665d34ba62bdcb8d107ba02b694982fc448406e64474c4a57d3a0867b28.
- GitHub Issue: #10137 (https://github.com/soldieg/ReBLACK-XBOX/issues/10137).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
