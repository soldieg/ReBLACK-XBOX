# sub_000E9CF0

- Manifest: lot 114, position 71; address order. Candidate span: 251 bytes (0x000E9CF0 to exclusive end 0x000E9DEB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD9CF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD9070. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 251 bytes. XBE raw = derived PE = split = REA; span SHA-256 7a92d01e2950d6b70bb9ab2051d9168429092179dcd04a975a7039bb42d5976f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 251 bytes.
- Source SHA-256 a462ffd43aba83abe5f7cce3715990241205342497aedc91d1662fe324f65a6d; compiled object SHA-256 695aacd85326c90f82aaa56b83d902e0d1b25ee0d2754f23cbc419e146640be3; candidate object SHA-256 2d79ad7b5e2dfe43f5d1fbbb7dcf730d3ab2ca409b2b2f579c0cd1c6a7108365.
- GitHub Issue: #10574 (https://github.com/soldieg/ReBLACK-XBOX/issues/10574).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
