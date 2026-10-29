# sub_001BDD50

- Manifest: lot 138, position 41; address order. Candidate span: 1 bytes (0x001BDD50 to exclusive end 0x001BDD51).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ADD50; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AD0D0. REA read_bytes evidence ev_7b679069ff34d0b29a151fc2fb14c7e29a41d6df33241e98ccc3bbc3290cdf34 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 64f7498c3a06137c94325c85b99e0365a96d58212d028bcf230b9eeef04e31a5; compiled object SHA-256 179d5a5dad94a5c1fd68362a9c3a167d87151a602c77b891ae24146c85e7048c; candidate object SHA-256 fb27f6385a7d2853e5eafd19e5b620964c2094e9e18bfed3c57b304fe9800803.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
