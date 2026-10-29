# sub_000ADA90

- Manifest: lot 107, position 12; address order. Candidate span: 23 bytes (0x000ADA90 to exclusive end 0x000ADAA7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9DA90; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9CE10. REA read_bytes evidence ev_9f795c6c7542f557c322958dcddf5bb2e3212efd64f1d57abb9c388a4d3a989d returned 23 bytes. XBE raw = derived PE = split = REA; span SHA-256 514bd3d1e8ded07953a6b51d98552e5066ec86d98bec351138fc7e4385a08abf.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 23 bytes.
- Source SHA-256 e2fadbe3db202d1a892dd5b4420e65e80c440db9c03cd6806c261e1514430fc0; compiled object SHA-256 9bd62d4d6e293a17b4699fa13a0bfe899bb73dc0cd8fa6c8ec1615728b9fc99f; candidate object SHA-256 599d34934f39893cdfc9a7f4402e927f688c74308923fae151eb2fc459ea7ce3.
- GitHub Issue: #9938 (https://github.com/soldieg/ReBLACK-XBOX/issues/9938).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
