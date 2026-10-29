# sub_000BFF70

- Manifest: lot 110, position 13; address order. Candidate span: 21 bytes (0x000BFF70 to exclusive end 0x000BFF85).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFF70; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAF2F0. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 21 bytes. XBE raw = derived PE = split = REA; span SHA-256 c26c634a51d4d9bc82f9aa9aabdd07be657bc9aa557c29de95be67ef2a48ff57.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 21 bytes.
- Source SHA-256 be431ca4d63bcb9ce28fa0372651e8a00f94d4e087f431e02eef2524d6f3ea7c; compiled object SHA-256 6bace1c068aef82f825ed17af3be1f0ccab4323d2f1fbf4328c9a6f5b256fa00; candidate object SHA-256 4d3eb5622afb8c84500dfb1e9302b9eaabe03a7ed1020c435965afba6c0e1ea6.
- GitHub Issue: #10206 (https://github.com/soldieg/ReBLACK-XBOX/issues/10206).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
