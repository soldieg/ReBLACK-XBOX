# sub_000BAC40

- Manifest: lot 108, position 70; address order. Candidate span: 25 bytes (0x000BAC40 to exclusive end 0x000BAC59).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAAC40; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xA9FC0. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 25 bytes. XBE raw = derived PE = split = REA; span SHA-256 431e4593fde844c59d95daf6f570703a297a3bdc1b00b1b6e2d118ade0b5dd3c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 25 bytes.
- Source SHA-256 60a31ed8ae4c656b3553801092da2e1c25e43b4f6f5323c92e3f4917b6dc215c; compiled object SHA-256 7640ec5dc5bc1389ae096f0e82d620190de408842a806ad81ede9d05b4e70037; candidate object SHA-256 41c20c079ae7b052c7714b87ebb5c9942b25720d4043dc38afa82177a6cbab4d.
- GitHub Issue: #10083 (https://github.com/soldieg/ReBLACK-XBOX/issues/10083).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
