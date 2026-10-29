# sub_0008CDB0

- Manifest: lot 105, position 5; address order. Candidate span: 128 bytes (0x0008CDB0 to exclusive end 0x0008CE30).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x7CDB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x7C130. REA read_bytes evidence ev_20b8a8d722153def3f09f483e16cec6c5489778136e0ac1efcbcb008fef6441e returned 128 bytes. XBE raw = derived PE = split = REA; span SHA-256 18638a20bd3efb6d6203192167d5fc8a9b6bf3d13ae77391921a38c86d428f8d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 128 bytes.
- Source SHA-256 9a9c7fafd6fcc22d442c1a2172fdf7ba39fd3a0d02c1a6cbabd23fa75c265433; compiled object SHA-256 7dcf6467248a3ab38dc5373377631218d207ba1035c0738bfdc953034f0e0d42; candidate object SHA-256 10d526f1c43586a87199347d4df5f4ca9f721d01b0822bea8ce0776729408628.
- GitHub Issue: #9752 (https://github.com/soldieg/ReBLACK-XBOX/issues/9752).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
