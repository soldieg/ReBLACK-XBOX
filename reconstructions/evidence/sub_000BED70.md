# sub_000BED70

- Manifest: lot 109, position 38; address order. Candidate span: 42 bytes (0x000BED70 to exclusive end 0x000BED9A).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAED70; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE0F0. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 42 bytes. XBE raw = derived PE = split = REA; span SHA-256 94d6cc50ee9002faad36dde30771b5ea254c08a00f176b4cb0900770bc0ad401.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 42 bytes.
- Source SHA-256 306c3c2d18fdacc6e1960179038a5fa2eb2ab0eb16a119eb9827b2c736957701; compiled object SHA-256 9bafa5b351ad61e11c4f390eb34987fc3aa1b86b85064bbef460775b4be35cde; candidate object SHA-256 7a4b442893cece6c1ae54e5ae77876c86a01fdc64aab2631e7c30bb935d5fc01.
- GitHub Issue: #10144 (https://github.com/soldieg/ReBLACK-XBOX/issues/10144).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
