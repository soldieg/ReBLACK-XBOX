# sub_000A8DE2

- Manifest: lot 106, position 56; address order. Candidate span: 3 bytes (0x000A8DE2 to exclusive end 0x000A8DE5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x98DE2; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x98162. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 350035d67bbad9ded6aeca4542efd660ac807e838bc409c091a6749844eb401b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 91844b60b3fb77e69407999e91b1e9b0b1cca354964748158b7e165003b8d356; compiled object SHA-256 04572ae831a9360f2067baee31f307f832c9b0300d36f0db2af400aacf9f4b65; candidate object SHA-256 df2e7fec456bd65fe46d541d4c5a0f24470217d4e52da001d4251ccb4237cadf.
- GitHub Issue: #9885 (https://github.com/soldieg/ReBLACK-XBOX/issues/9885).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
