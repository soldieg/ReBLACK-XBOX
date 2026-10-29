# sub_000BAC60

- Manifest: lot 108, position 71; address order. Candidate span: 26 bytes (0x000BAC60 to exclusive end 0x000BAC7A).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAAC60; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xA9FE0. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 26 bytes. XBE raw = derived PE = split = REA; span SHA-256 5967aa5f107fa5628061f2e2ee4d5cbb09848d8dbde648088705d49dd11ce28c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 26 bytes.
- Source SHA-256 04e92f69fd427ae145e3c4a8c5ae4e7b6111a5fabc9dce908df56547dd42aca0; compiled object SHA-256 b92c7e3ca28ce3d414a9f479758f7a671022510e1e08da14cc6c86e14fde01f3; candidate object SHA-256 16b06c50a3979802d8ca970a396533fd27672866ad8bef3b94a897ce9bcc1314.
- GitHub Issue: #10084 (https://github.com/soldieg/ReBLACK-XBOX/issues/10084).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
