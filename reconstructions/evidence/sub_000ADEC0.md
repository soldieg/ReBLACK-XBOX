# sub_000ADEC0

- Manifest: lot 107, position 14; address order. Candidate span: 92 bytes (0x000ADEC0 to exclusive end 0x000ADF1C).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9DEC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9D240. REA read_bytes evidence ev_9f795c6c7542f557c322958dcddf5bb2e3212efd64f1d57abb9c388a4d3a989d returned 92 bytes. XBE raw = derived PE = split = REA; span SHA-256 ce704e05cfaf1fcf4e3722e058d20fb5c1899999a93cdc82f529b33803fb63ea.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 92 bytes.
- Source SHA-256 7fc109cb3d7834e070c0f37f3e37404357da5c23f67b94eefcd530f8a40bb3bf; compiled object SHA-256 443b5183268d793c343ce210a053f2ce6f13ff604c0bff1611c9261a67ceaaf7; candidate object SHA-256 0342a2f94e3eb436561c91c9340d6e6641f3746270f5ac2c36df267bfacc7ae9.
- GitHub Issue: #9941 (https://github.com/soldieg/ReBLACK-XBOX/issues/9941).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
