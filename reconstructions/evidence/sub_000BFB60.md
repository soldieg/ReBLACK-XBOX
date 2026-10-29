# sub_000BFB60

- Manifest: lot 110, position 5; address order. Candidate span: 52 bytes (0x000BFB60 to exclusive end 0x000BFB94).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFB60; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAEEE0. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 52 bytes. XBE raw = derived PE = split = REA; span SHA-256 61fd54197bca2bb98f58ac9b2db86ff776ae6be759e46849c3111240d571c78a.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 52 bytes.
- Source SHA-256 267774a3eea81a73e2e78f1ebb9369316d5d94ec63e96e4683162c4f5c21b24b; compiled object SHA-256 56ced1c98ba84b41cf7a13f6d142bde1ab989593e997d260fd491eb1da796135; candidate object SHA-256 7f86632f949d776ec5ea499df281467a3347995785440a9e2f6eec55a8fd0825.
- GitHub Issue: #10200 (https://github.com/soldieg/ReBLACK-XBOX/issues/10200).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
