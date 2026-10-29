# sub_000E1BB0

- Manifest: lot 113, position 2; address order. Candidate span: 3 bytes (0x000E1BB0 to exclusive end 0x000E1BB3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD1BB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD0F30. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e18aacce29affcdddaa5f641ac1ec12552e0fe9d066e6408941b1792818b8619.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 38864deefd536684b1796f13243c08d81ad0cfca425e92049ac336aaa80bb86c; compiled object SHA-256 028ac4dfd3a4802131f6b68d42ca4151727be60e0b61ee0207daee1df598c947; candidate object SHA-256 7f2d39835a4a493f9fd38f43a683b5ee3666fca47a9a2aae0bbc19f7bfb0bc51.
- GitHub Issue: #10418 (https://github.com/soldieg/ReBLACK-XBOX/issues/10418).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
