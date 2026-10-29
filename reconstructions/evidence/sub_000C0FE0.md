# sub_000C0FE0

- Manifest: lot 110, position 75; address order. Candidate span: 1 bytes (0x000C0FE0 to exclusive end 0x000C0FE1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB0FE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB0360. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 94fa8b502b6e94727d05757af47bc1b117ffc4a4396e59534ed78fec3b94de97; compiled object SHA-256 91822f485bb315dd308e3b95d514ead3b2a75827a19c5d8bf0069c60a886a59b; candidate object SHA-256 3a10c36a55390a36f88e660672ed371f24415df9f9e364ea2d1d66e2ac8115d2.
- GitHub Issue: #10244 (https://github.com/soldieg/ReBLACK-XBOX/issues/10244).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
