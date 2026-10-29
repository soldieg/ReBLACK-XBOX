# sub_000F8FF0

- Manifest: lot 115, position 27; address order. Candidate span: 16 bytes (0x000F8FF0 to exclusive end 0x000F9000).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xE8FF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xE8370. REA read_bytes evidence ev_8bf3b34b3798453531b59335a87d16b972ccc64c79ffa15162dccbb889eec401 returned 16 bytes. XBE raw = derived PE = split = REA; span SHA-256 847ba621913069b17d6a21f23d8e77c5c83fbe0fc08777846238e5f8b672b77b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 16 bytes.
- Source SHA-256 e6e670cc7940cd9da1eea152d2c008cf893dd364e1edd6b0bce65dbc5dc27c0b; compiled object SHA-256 e4bc3b80c7c940652835edd144aafaac2da8c0752104aa15c10cc21b9d42173f; candidate object SHA-256 50470ab224da9137b30db42df899c6707947a38a1693a315a523ee3291c85ed3.
- GitHub Issue: #5920 (https://github.com/soldieg/ReBLACK-XBOX/issues/5920).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
