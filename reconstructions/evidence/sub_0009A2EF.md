# sub_0009A2EF

- Manifest: lot 105, position 66; address order. Candidate span: 243 bytes (0x0009A2EF to exclusive end 0x0009A3E2).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x8A2EF; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x8966F. REA read_bytes evidence ev_20b8a8d722153def3f09f483e16cec6c5489778136e0ac1efcbcb008fef6441e returned 243 bytes. XBE raw = derived PE = split = REA; span SHA-256 88020824ec548915f28b8799e8d724fdb3c86dfe2af1dd5615a45984acb1699a.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 243 bytes.
- Source SHA-256 44a8b950369eaa28aa8e4cf794d25fdf914a7b1b230789c50934f1b67295a304; compiled object SHA-256 4d422efa82640850ed61c493afd5e3925375e5f0a3876cf57d908051a4736a71; candidate object SHA-256 f3f50b3143ebc56410f50a6ad03a1b79158f67da26137d595b1f22ca9547df6b.
- GitHub Issue: #9805 (https://github.com/soldieg/ReBLACK-XBOX/issues/9805).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
