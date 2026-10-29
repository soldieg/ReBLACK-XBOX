# sub_000B2BF0

- Manifest: lot 107, position 38; address order. Candidate span: 65 bytes (0x000B2BF0 to exclusive end 0x000B2C31).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xA2BF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xA1F70. REA read_bytes evidence ev_9f795c6c7542f557c322958dcddf5bb2e3212efd64f1d57abb9c388a4d3a989d returned 65 bytes. XBE raw = derived PE = split = REA; span SHA-256 a80992f8752b23e5a67841580c498c6326b859deb36435ce07b7a536eb2dd32f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 65 bytes.
- Source SHA-256 2f05d6fb956446ef8df8a9c3ce0de59a68213b4238d7dd90fab66c8dae3ad076; compiled object SHA-256 ae440f9fbd8f31b37866f26888dc01e608e51531498a46739cc3ae81cb4a8a5a; candidate object SHA-256 4860fe49d200c9747c30d4396b427f895623dc4ca4ca86822732c33b0bdbe106.
- GitHub Issue: #9959 (https://github.com/soldieg/ReBLACK-XBOX/issues/9959).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
