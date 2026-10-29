# sub_000BAFB0

- Manifest: lot 108, position 77; address order. Candidate span: 20 bytes (0x000BAFB0 to exclusive end 0x000BAFC4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAAFB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAA330. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 20 bytes. XBE raw = derived PE = split = REA; span SHA-256 c54d678e749371c1b735256865bdbbce8a53ee6bc83ea2a245d3d9f18a4ab4b2.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 20 bytes.
- Source SHA-256 dd7bc202fac482761d48f182a5116ff2f6dcea3d57f8ef7d57108e6e940af945; compiled object SHA-256 5eee131bdc57d62da8cbf81d0b47af349e873173eb491a15502c59ebfd11883d; candidate object SHA-256 5ad6fec92ecc2cb825eea3756ad829eb115e9be51b7c99451101a5d5a4538899.
- GitHub Issue: #10089 (https://github.com/soldieg/ReBLACK-XBOX/issues/10089).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
