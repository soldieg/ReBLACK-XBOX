# sub_001C6CF0

- Manifest: lot 138, position 98; address order. Candidate span: 96 bytes (0x001C6CF0 to exclusive end 0x001C6D50).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1B6CF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1B6070. REA read_bytes evidence ev_88c91c3db4292c7f8735abe90bcd65050b724b369fdeedc0b1490a9bbafe58a4 returned 96 bytes. XBE raw = derived PE = split = REA; span SHA-256 5dcf4b8a66e536c7f4ceccafd89c0c036ceda15a67f581ecf5031bfbf5d56b3f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 96 bytes.
- Source SHA-256 12ec6e8eb33d24bf08c7b59996ccbdf6009a8c34630dea3a6db53123b0a895e7; compiled object SHA-256 64228c9cc9f6447239d2cab099e36e10f74a1bf252c7494964a3503e2ef85995; candidate object SHA-256 6eea39e36ddb84e49f1242c8a181843287bdd77276bbc7ae7cf409fad61a1041.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
