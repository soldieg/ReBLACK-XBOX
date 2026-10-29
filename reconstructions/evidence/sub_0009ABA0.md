# sub_0009ABA0

- Manifest: lot 105, position 76; address order. Candidate span: 179 bytes (0x0009ABA0 to exclusive end 0x0009AC53).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x8ABA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x89F20. REA read_bytes evidence ev_20b8a8d722153def3f09f483e16cec6c5489778136e0ac1efcbcb008fef6441e returned 179 bytes. XBE raw = derived PE = split = REA; span SHA-256 f4c3fd0a72a74c7ff0dd1226939b5847756bb190f5c148d459029877e36a3447.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 179 bytes.
- Source SHA-256 8d27520982e85b6e8d51bb447a0cbc97ba9bd442e317fb35ea01a002b2867e10; compiled object SHA-256 1f567f989d7cf7893eac10b1b0bcb66b0dcbd65a45d1efb6522188e82c68c104; candidate object SHA-256 e7021a16fd977a61702a64f0fb48f6ebadd505c7004446ce06a8f7a1afa02b44.
- GitHub Issue: #9813 (https://github.com/soldieg/ReBLACK-XBOX/issues/9813).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
