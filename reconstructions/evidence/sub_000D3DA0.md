# sub_000D3DA0

- Manifest: lot 112, position 33; address order. Candidate span: 79 bytes (0x000D3DA0 to exclusive end 0x000D3DEF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xC3DA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xC3120. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 79 bytes. XBE raw = derived PE = split = REA; span SHA-256 51aeff8d0421119cb65e8e49929c9eaf0a8dcb7fb2ea7b8f102bbd29b2918c48.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 79 bytes.
- Source SHA-256 fcb5e48c719810cf8edfc3347072066ef2bf0ea75e8c28fbe2d25f67c6586ca0; compiled object SHA-256 be3bde3b06e8813861cd80503211438dec03b79d7e77c2804559c82ef07bc908; candidate object SHA-256 1cadb994ffd2bcc591c3c910a621291916179de78f2e0cc1ff086a4aa01ded05.
- GitHub Issue: #10363 (https://github.com/soldieg/ReBLACK-XBOX/issues/10363).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
