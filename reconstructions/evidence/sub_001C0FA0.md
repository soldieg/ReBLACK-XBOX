# sub_001C0FA0

- Manifest: lot 138, position 66; selected in ascending candidate order for lot 106. Candidate span: 622 bytes (0x001C0FA0 to exclusive end 0x001C120E).
- Boundary: Ghidra 12.1.3 procedure entry 0x001C0FA0, sum of disassembled body bytes 578, span 622 bytes across ranges 001c0fa0-001c1037;001c1040-001c1079;001c1080-001c10b9;001c10c0-001c10f9;001c1100-001c1139;001c1140-001c1179;001c1180-001c11b9;001c11c0-001c120d. Direct incoming call-reference export: 1; callers: 001eeb99@001ee820. The export does not establish completeness of indirect references.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1B0FA0. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1B0320. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 8841d7d6ac5be1f34d168b0b7e6e1a1a7acd600e0b8a162055d20b9264154130. REA read_bytes evidence ev_e7bffc9635bfa34a34e3718026f71aa821bf89223a54be6eca2c8970692161d1 returned 622 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 622 bytes.
- Source SHA-256 43f54bedb0cbd21f39f19b455f02d26216d5a907983312de214a5b421a4a8a4c; fresh object SHA-256 e5bcb67a47b7f0499dfed809315ef06df7e71460806375d05f50fa875817f578; candidate object SHA-256 aa12dba37db9828d457e648fa88b3e1bd9a484e3519c078fe8d021d39eb46fcd.
- GitHub Issue: #9264 (https://github.com/soldieg/ReBLACK-XBOX/issues/9264).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.

## Lot 138 manifest candidate evidence (2026-10-29)

- Manifest: lot 138, position 66; address order. Candidate span: 622 bytes (0x001C0FA0 to exclusive end 0x001C120E).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 001eeb99@001ee820. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1B0FA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1B0320. REA read_bytes evidence ev_00721168dc667f8a5ccf532e1d5272a81156d0bb5043f1caf1c3fc34c57e7c92 returned 622 bytes. XBE raw = derived PE = split = REA; span SHA-256 8841d7d6ac5be1f34d168b0b7e6e1a1a7acd600e0b8a162055d20b9264154130.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 622 bytes.
- Source SHA-256 43f54bedb0cbd21f39f19b455f02d26216d5a907983312de214a5b421a4a8a4c; compiled object SHA-256 88ef6e34358c194fcdfb46c4538bc6db9e7f3912d42b0b96258e841686ec5c74; candidate object SHA-256 aa12dba37db9828d457e648fa88b3e1bd9a484e3519c078fe8d021d39eb46fcd.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
