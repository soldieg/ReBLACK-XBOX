# sub_001BE2E0

- Manifest: lot 138, position 50; address order. Candidate span: 21 bytes (0x001BE2E0 to exclusive end 0x001BE2F5).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AE2E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AD660. REA read_bytes evidence ev_173cb00f8fed72489c9f03fda603f4b619522ff6183e2cf84fbd3c52940541cc returned 21 bytes. XBE raw = derived PE = split = REA; span SHA-256 e9b35d5146df0468bb086c5d4a6b3814dd93c7a06237d4d766ce63f9d17fc4ea.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 21 bytes.
- Source SHA-256 650e033ab359076431f84944825e927e83b05fd272d60200ac68f6be93532383; compiled object SHA-256 7d87e6865b95f5aa48b4dcbc2ec9f4320f936149f414226df9cc4017855434a3; candidate object SHA-256 7ce745233a317201e3223ebccb8c6ff6f2f5c58604d060b468f74c2e8325828c.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
