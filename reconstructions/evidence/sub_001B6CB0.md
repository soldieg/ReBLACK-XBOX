# sub_001B6CB0

- Manifest: lot 136, position 40; address order. Candidate span: 7 bytes (0x001B6CB0 to exclusive end 0x001B6CB7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A6CB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A6030. REA read_bytes evidence ev_f20bf18a892ed9094a1bb612579509d94ff009498a436c49e810d8f81d049593 returned 7 bytes. XBE raw = derived PE = split = REA; span SHA-256 367a0c2ca480316cf9fb37d91725dd3b2bcfcf26c283f75d55bd0f454f7c399d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 7 bytes.
- Source SHA-256 ac02bb18177ae10fe4444498663187ca441d586a2c154e28ce630e42ed36cfb5; compiled object SHA-256 3d8ee9f198170273cab9b8f009b8a954c1781046214fb28b0542af55f43411f1; candidate object SHA-256 c3292b721e7c1d327ac3f753ab844803f7b2d8606ea0a5b902477e99a85f90eb.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
