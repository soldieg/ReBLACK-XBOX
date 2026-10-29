# sub_001F1AD0

- Manifest: lot 140, position 56; address order. Candidate span: 1 bytes (0x001F1AD0 to exclusive end 0x001F1AD1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E1AD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E0E50. REA read_bytes evidence ev_5f2b27783cfb681a677a05839c97732ec36e114e797c4af33f405fa0280f9668 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 beaa3599020d2f6a703047e258cffcaa8b7b10462c106a760871ef13ba4f036d; compiled object SHA-256 1dcffbaf611f14478b9fe99064062160a404a3a1ec4ee68d296087712deb0d9b; candidate object SHA-256 7ba791cc3512fc835bb437c3458132d8a3cea6c12be30921c43fbfd133157fdb.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
