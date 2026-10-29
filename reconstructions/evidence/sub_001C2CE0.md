# sub_001C2CE0

- Manifest: lot 138, position 78; address order. Candidate span: 3 bytes (0x001C2CE0 to exclusive end 0x001C2CE3).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1B2CE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1B2060. REA read_bytes evidence ev_f07f19a1fab57790294d400ad992ce2b4e3b3f7482ae7e4169bdbd3daa6534d3 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 e598d0c3ba86d917b177d7adde0556aa99bc355543c57aee0a3e50b684dd7e99.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 e3182ba527b9f9393941bc43f87f381ba601b92dd888b9abd549895d1be1ae59; compiled object SHA-256 bc028a0919f0dab905ab35ca661a80651b46e0846e0d28d71a31d70616f94791; candidate object SHA-256 8bd4985c320363ba28000d2b8530fcf41eeabeecc9701f5783bf0300318912f7.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
