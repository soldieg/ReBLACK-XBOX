# sub_000BFF90

- Manifest: lot 110, position 14; address order. Candidate span: 8 bytes (0x000BFF90 to exclusive end 0x000BFF98).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFF90; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAF310. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 8 bytes. XBE raw = derived PE = split = REA; span SHA-256 33abd35ea59db771947d169559756d79190c94c3b42b3ae62d71cff080e0c667.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 8 bytes.
- Source SHA-256 757a0ec26f7457c4803d849d6ee3e23faf9c05a02fcc999a752d111bcea92850; compiled object SHA-256 7481895a796c1f5d4d22b48c8a4f19b4c715ce286f22f9a9f1f019fb1cb2581a; candidate object SHA-256 054127c5502106fd335c40680057813e0f010518b858f1ad371dd7685e9b70b4.
- GitHub Issue: #10207 (https://github.com/soldieg/ReBLACK-XBOX/issues/10207).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
