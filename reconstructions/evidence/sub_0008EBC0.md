# sub_0008EBC0

- Manifest: lot 105, position 23; address order. Candidate span: 24 bytes (0x0008EBC0 to exclusive end 0x0008EBD8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x7EBC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x7DF40. REA read_bytes evidence ev_20b8a8d722153def3f09f483e16cec6c5489778136e0ac1efcbcb008fef6441e returned 24 bytes. XBE raw = derived PE = split = REA; span SHA-256 69d6b55798e07d9fd9218da24413fe9deb2acb841b386e3f97eda7a652287d0f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 24 bytes.
- Source SHA-256 cee3c8ddc9c91696c309df1163fa700f82eeb2878aed593b345744a362be928f; compiled object SHA-256 49bbb46394b2910662734eb79d3403e4a5aaf42d8fad5bac610760c3ffc07f76; candidate object SHA-256 655d448b848ebbd75565093298c3b4d11521c6bb6d1f160d6643e9d082153360.
- GitHub Issue: #9770 (https://github.com/soldieg/ReBLACK-XBOX/issues/9770).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
