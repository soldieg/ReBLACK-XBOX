# sub_0008EBA0

- Manifest: lot 105, position 22; address order. Candidate span: 22 bytes (0x0008EBA0 to exclusive end 0x0008EBB6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x7EBA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x7DF20. REA read_bytes evidence ev_20b8a8d722153def3f09f483e16cec6c5489778136e0ac1efcbcb008fef6441e returned 22 bytes. XBE raw = derived PE = split = REA; span SHA-256 88ffcab65a8a3327c52972e1797de524cc9d0bf9ca652e13eb132acd90267908.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 22 bytes.
- Source SHA-256 ff88db7467e42663c356496f6b8758612abe8c7ab5797c1db9ac23f7c6be02fd; compiled object SHA-256 9ed98474a121bceb6dc1ef52c14b9c012335bbca69e971c53f891f337fc80b9c; candidate object SHA-256 3ec72b2fdaf10e4379ba8f1da2aaa11907e9b00fb07b8825efbaf022340924fd.
- GitHub Issue: #9769 (https://github.com/soldieg/ReBLACK-XBOX/issues/9769).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
