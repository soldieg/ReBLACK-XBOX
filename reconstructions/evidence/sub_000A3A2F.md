# sub_000A3A2F

- Manifest: lot 106, position 10; address order. Candidate span: 2 bytes (0x000A3A2F to exclusive end 0x000A3A31).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x93A2F; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x92DAF. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 2 bytes. XBE raw = derived PE = split = REA; span SHA-256 72fb562c9d90dfcc008e5b0a391395fd2a244bb6bc231e2621a8ec6860d21fa3.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 2 bytes.
- Source SHA-256 40c865aaf08b656bcebfddeb657b77d640bdfbecfbee2d455a985c276d9cb732; compiled object SHA-256 642eda64a693a81d4efc5f833769e70235be37e6c6d8e897eb6eb51883af654e; candidate object SHA-256 1c2f0fedf596f78abf39e4041609f4e5f28c348072054c75dad28c327ee8586d.
- GitHub Issue: #9844 (https://github.com/soldieg/ReBLACK-XBOX/issues/9844).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
