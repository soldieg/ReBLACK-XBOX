# sub_001B5BB0

- Manifest: lot 135, position 56; address order. Candidate span: 1 bytes (0x001B5BB0 to exclusive end 0x001B5BB1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A5BB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A4F30. REA read_bytes evidence ev_d7224eeb9789c74d03ae69ed433a0fbdf55e78381131ab2dea5ca3371975bb03 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 97fe2ddd120798412a8d169ce466dcb663fa1081baf4fa4b737f02d7f81ab556; compiled object SHA-256 b9809ee061e0e4c922cbcb2f0be7f8ecabb6faa136483525e83907df72eb636a; candidate object SHA-256 42779293f4a064b931ab873eaf226d5481d85fb6a951d07e3229097548594675.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
