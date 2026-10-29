# sub_0009D3AF

- Manifest: lot 105, position 86; address order. Candidate span: 10 bytes (0x0009D3AF to exclusive end 0x0009D3B9).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x8D3AF; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x8C72F. REA read_bytes evidence ev_20b8a8d722153def3f09f483e16cec6c5489778136e0ac1efcbcb008fef6441e returned 10 bytes. XBE raw = derived PE = split = REA; span SHA-256 a4a96f474953f96156f0315a63e08b1f4df83428a496c1c9d2068c3759d2441b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 10 bytes.
- Source SHA-256 001563fbd36cc12d4b10d0da467e2c27d1e2348a4dc2fe5ce0db9adcbc42a3eb; compiled object SHA-256 8d5bc13021d27f39cce05b40f44ece8154ff568d4e4f734106ffecfe76694999; candidate object SHA-256 72a1eb3f6edf38aa37fe8f82770317ef82a7c5b1c526b8c2759b2b88e8a385c7.
- GitHub Issue: #9827 (https://github.com/soldieg/ReBLACK-XBOX/issues/9827).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
