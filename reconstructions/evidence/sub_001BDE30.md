# sub_001BDE30

- Manifest: lot 138, position 46; address order. Candidate span: 13 bytes (0x001BDE30 to exclusive end 0x001BDE3D).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ADE30; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AD1B0. REA read_bytes evidence ev_933dee4efa8184b206dffede943de5e6bbcdcb045230333a3b034d2dab374aac returned 13 bytes. XBE raw = derived PE = split = REA; span SHA-256 0decf16cf82fdd2aaa7386a498b0c4e227fd89af58cecb09b65293213e59443a.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 13 bytes.
- Source SHA-256 885cc71aa5eb4870653ff7d1c6e1f91b67fe02ca50a4f073540d77e2b454e71b; compiled object SHA-256 7418082a3a7110e49260c6e9ac9f862de44b975323b6138089d74e76d513219d; candidate object SHA-256 5507d61124dac566ddb9c68150299c3ceae090298d43c26c12bef4c416f12ebc.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
