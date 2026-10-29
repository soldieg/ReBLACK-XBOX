# sub_000BFF20

- Manifest: lot 110, position 10; address order. Candidate span: 19 bytes (0x000BFF20 to exclusive end 0x000BFF33).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAFF20; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAF2A0. REA read_bytes evidence ev_24940b5213320b8b0167337d152ea16526c8ab04fdd78eb7de11ee97d5b560ed returned 19 bytes. XBE raw = derived PE = split = REA; span SHA-256 80d48d91d602ddee9e00c5dddab67f682726c312328dad40dd398cd69c29aac6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 19 bytes.
- Source SHA-256 d40a21c3ac82567113d23c5eba2fdea1bed0dbbf6185e406fbb09f6b35c3635a; compiled object SHA-256 273d401a940d0d54f779353620ab25044a4150811cce6b5b134fbc123348290b; candidate object SHA-256 f43fa30a3b705803c2fcb3bad45eeb493e100b6a1760facb41e8aa2e089f87bd.
- GitHub Issue: #10202 (https://github.com/soldieg/ReBLACK-XBOX/issues/10202).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
