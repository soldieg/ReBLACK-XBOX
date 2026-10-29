# sub_000C0FA0

- Manifest: lot 110, position 73; address order. Candidate span: 12 bytes (0x000C0FA0 to exclusive end 0x000C0FAC).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB0FA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB0320. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 12 bytes. XBE raw = derived PE = split = REA; span SHA-256 0b9efe2b1fd22599c20194684e889d524492c2b1a472dd741ab9ab52eb0227d1.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 12 bytes.
- Source SHA-256 36c2b79d7bfeab61a673757f1f5e3632189c0115fea874607a6421d57f1f7b35; compiled object SHA-256 b11252dc9a0f3754c138bd291b256f8fe5a253dd7196ea97979aafb94495b2ce; candidate object SHA-256 fd6ded90fd866203fa9a8a5e0dbe12e351841fe33b7465e6a39e477664adbaa9.
- GitHub Issue: #10243 (https://github.com/soldieg/ReBLACK-XBOX/issues/10243).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
