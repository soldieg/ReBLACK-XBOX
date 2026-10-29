# sub_000DB7B0

- Manifest: lot 112, position 80; address order. Candidate span: 4 bytes (0x000DB7B0 to exclusive end 0x000DB7B4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xCB7B0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xCAB30. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 29ec8e21b36c26f52210b8a71bc3b496c1683b94169609eb9f22d13299f12d3d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 4d5b2681b494b2b615e8fa3e48a3557e4b3cae363b39a2564dbfa8fe9ec538ef; compiled object SHA-256 1a703d128b6c76b7080cf63ddbdc5f4b694a94d08033f2b8a5b8020000b66624; candidate object SHA-256 0d25a614150e58d759435d2011ffe21649780cec6472df0b93ee0c087d367d23.
- GitHub Issue: #10403 (https://github.com/soldieg/ReBLACK-XBOX/issues/10403).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
