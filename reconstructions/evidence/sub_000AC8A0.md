# sub_000AC8A0

- Manifest: lot 107, position 1; address order. Candidate span: 23 bytes (0x000AC8A0 to exclusive end 0x000AC8B7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9C8A0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9BC20. REA read_bytes evidence ev_9f795c6c7542f557c322958dcddf5bb2e3212efd64f1d57abb9c388a4d3a989d returned 23 bytes. XBE raw = derived PE = split = REA; span SHA-256 0e163e6b351cdf01f4417fb516387b8795cbf609bcfece88df5c4ff91d6868bb.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 23 bytes.
- Source SHA-256 fc6141676de29a608a514a4e235da2c4e0902b8c2da27ccb84b004d4f503abff; compiled object SHA-256 c32669bbcf9b80a29fc2d1ebdac1ecd87b2bb063d8c40c8c8676bf73d3717598; candidate object SHA-256 e28031f04a24af37bf4f6c8312865d6a4356dbd0e351a16daadba96428ab7315.
- GitHub Issue: #9928 (https://github.com/soldieg/ReBLACK-XBOX/issues/9928).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
