# sub_000C0EE0

- Manifest: lot 110, position 63; address order. Candidate span: 4 bytes (0x000C0EE0 to exclusive end 0x000C0EE4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB0EE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB0260. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 324170cec2416e44bf60ce35ea115522817bf307d245174fe76468729205ffda.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 733580985347fd9b70b9fbb25dfbb0cdd35a44c02673a3ef327e2a863c2c1f6b; compiled object SHA-256 7c9f375e08b09c5afe01962a2d3aefe3372d040ef2cecc52e7072d5bf7c52609; candidate object SHA-256 8297cadf41dde9ec59745d0a3d10fe4f690172de02648da190e8dddff741b1b3.
- GitHub Issue: #10233 (https://github.com/soldieg/ReBLACK-XBOX/issues/10233).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
