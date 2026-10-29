# sub_000BF9E0

- Manifest: lot 109, position 95; address order. Candidate span: 12 bytes (0x000BF9E0 to exclusive end 0x000BF9EC).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF9E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAED60. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 12 bytes. XBE raw = derived PE = split = REA; span SHA-256 0ddc78c778e0d0cb36e2e657d6637cc954ece6472f1850f2dd4c599545563fa3.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 12 bytes.
- Source SHA-256 a214d34a0b8cdd0c29b71e7bd8a5c01234e85f06fd9c2242b98c20e71f74fae5; compiled object SHA-256 e7289c4088581cd862f5347fb3bbec277ef582698f3a1bcbe04d555006672540; candidate object SHA-256 c8cb12e49416416db28411c4a84a2875a25c23698fc4ec45d8e34f47dfe6ef02.
- GitHub Issue: #10190 (https://github.com/soldieg/ReBLACK-XBOX/issues/10190).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
