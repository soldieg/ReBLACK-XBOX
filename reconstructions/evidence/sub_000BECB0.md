# sub_000BECB0

- Manifest: lot 109, position 35; address order. Candidate span: 52 bytes (0x000BECB0 to exclusive end 0x000BECE4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAECB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE030. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 52 bytes. XBE raw = derived PE = split = REA; span SHA-256 bba87fc696fd5fe6ddcf4bdcc55f91572d2ab90127e805014288559a28bc9586.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 52 bytes.
- Source SHA-256 66221239e8a34fc7a26622a8bb57b36df42ca1eb8767e683ea9e6e653c5686a3; compiled object SHA-256 ff1a9b24a04f00a242f404fa96e9d7206de77e19e4091126433164dbf7bd38f1; candidate object SHA-256 e0c710ed9c2a91716d0f5bd11975d4824de3378a56cb9107a146ac4e7e557655.
- GitHub Issue: #10141 (https://github.com/soldieg/ReBLACK-XBOX/issues/10141).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
