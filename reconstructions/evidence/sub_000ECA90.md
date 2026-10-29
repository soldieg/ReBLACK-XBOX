# sub_000ECA90

- Manifest: lot 114, position 83; address order. Candidate span: 38 bytes (0x000ECA90 to exclusive end 0x000ECAB6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xDCA90; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xDBE10. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 38 bytes. XBE raw = derived PE = split = REA; span SHA-256 11d0782c5894ef9a58bf4563160a953fc1185cbafeac2c6cd323f39d1861517f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 38 bytes.
- Source SHA-256 5dae85c1bf59c0d75f399bbd24bcc4f243afd71e0ca592bae5a87fcd20ac0f90; compiled object SHA-256 ca9e04856a8b84f521dad2176fa281cec3633b6dc8530e91d0aa18b237f9b22b; candidate object SHA-256 e566073a8dd1a63c9435bca4a93ff646e8ba25485ec18d717b23ee0f5b1f78dd.
- GitHub Issue: #10586 (https://github.com/soldieg/ReBLACK-XBOX/issues/10586).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
