# sub_000BF0E0

- Manifest: lot 109, position 49; address order. Candidate span: 1 bytes (0x000BF0E0 to exclusive end 0x000BF0E1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAF0E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE460. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 569d67c12a2f48cc06bb52219351fc8b4f914fdce9f4775121addad5e1f94d6f; compiled object SHA-256 65af361216cbd7306fdbe75243d394895b4bf335322915a619555d504a25dadc; candidate object SHA-256 17a83235885032e4638f05e836310688955687082a431763185d2a108e09c78d.
- GitHub Issue: #10152 (https://github.com/soldieg/ReBLACK-XBOX/issues/10152).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
