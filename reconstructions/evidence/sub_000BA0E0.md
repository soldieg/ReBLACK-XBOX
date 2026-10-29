# sub_000BA0E0

- Manifest: lot 108, position 52; address order. Candidate span: 28 bytes (0x000BA0E0 to exclusive end 0x000BA0FC).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAA0E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xA9460. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 28 bytes. XBE raw = derived PE = split = REA; span SHA-256 3838c809efff0ff5599b099965f4b3d2505192a59a7a95bdb181bb46513a5c5d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 28 bytes.
- Source SHA-256 3fe78e11ef00774e733a77d36ba1719711de5bca38ae9618f9716395568bdb22; compiled object SHA-256 3336425edb730d30cc10cbdd288f080eaeb8332d56fad59858714b0c56bab1ef; candidate object SHA-256 68452966cb910e5cdd37b8b614f11a4aa9dfc9407b27651da0c158328dc19edf.
- GitHub Issue: #10065 (https://github.com/soldieg/ReBLACK-XBOX/issues/10065).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
