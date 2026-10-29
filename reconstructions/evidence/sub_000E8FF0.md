# sub_000E8FF0

- Manifest: lot 114, position 61; address order. Candidate span: 440 bytes (0x000E8FF0 to exclusive end 0x000E91A8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD8FF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD8370. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 440 bytes. XBE raw = derived PE = split = REA; span SHA-256 80246876bf4871ceba08bb16a58423bdde8c6029a5ae1ca7186224420690d60c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 440 bytes.
- Source SHA-256 2ede76c2090f29dd187d435cd47b70a154b76c472654bf5129b0dd653a8974d3; compiled object SHA-256 be3950d1472e0480510f2367b647e076ae3fd776953a0a9c4a8e960389d32fd7; candidate object SHA-256 8ec54575e669b28c44eec73a894d033481cc62fd10c6590839860ebf6a22e5bd.
- GitHub Issue: #10563 (https://github.com/soldieg/ReBLACK-XBOX/issues/10563).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
