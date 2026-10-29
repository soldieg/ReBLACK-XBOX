# sub_0009AFD0

- Manifest: lot 105, position 84; address order. Candidate span: 48 bytes (0x0009AFD0 to exclusive end 0x0009B000).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x8AFD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x8A350. REA read_bytes evidence ev_20b8a8d722153def3f09f483e16cec6c5489778136e0ac1efcbcb008fef6441e returned 48 bytes. XBE raw = derived PE = split = REA; span SHA-256 9654bc1659c53c7f567570adc3b0da1c0c95e5f035064fcefc687b3ebcfc88d7.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 48 bytes.
- Source SHA-256 740b097e61312a28d46cd134bb3f4e44052c50be6daeb06c63f3899ddd288546; compiled object SHA-256 17b2be7412b367ef9b6027692a1f91b5f27a0df76cda64b75adc8dc64c7359e2; candidate object SHA-256 c434bc5d9846772eb468c4b06f9b7765edc45c8e59bff1ab144650230da4c2b6.
- GitHub Issue: #9823 (https://github.com/soldieg/ReBLACK-XBOX/issues/9823).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
