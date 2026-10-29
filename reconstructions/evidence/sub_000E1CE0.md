# sub_000E1CE0

- Manifest: lot 113, position 10; address order. Candidate span: 9 bytes (0x000E1CE0 to exclusive end 0x000E1CE9).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD1CE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD1060. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 9 bytes. XBE raw = derived PE = split = REA; span SHA-256 1788b02a086ce68fbba7c60b781342a6be1efd4830f39987fb1e943348776a99.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 9 bytes.
- Source SHA-256 012881a070c9b93e6c581f840640774588c95f723e16bfcdf5fdde4aae7ae910; compiled object SHA-256 261bbd745e5e2638cdde45fde8e13fd0c00d62205badea481d06eec0b3a9a841; candidate object SHA-256 c76db7ecf3c514647ac8d3cc29c44ec3569352049fbd982914ec49fa0846f673.
- GitHub Issue: #10423 (https://github.com/soldieg/ReBLACK-XBOX/issues/10423).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
