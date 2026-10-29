# sub_000BE3E0

- Manifest: lot 108, position 95; address order. Candidate span: 4 bytes (0x000BE3E0 to exclusive end 0x000BE3E4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAE3E0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAD760. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 f25784c1f6c71c623ee64569e5bd65f9e23d62f920e972a3868c41e6cb347b57.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 d5129ef6d6f6efef5430b5fbfa16c41cdd33b69a951aa6f9d5ae8892fc3bcb71; compiled object SHA-256 286dec2101d187869e73a035dbf55b61a181d56d08eb2ae3636736a9dbb101e1; candidate object SHA-256 f1fd96673721282d0e701c80534130792af17da42849b267291fc708313d5c95.
- GitHub Issue: #10109 (https://github.com/soldieg/ReBLACK-XBOX/issues/10109).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
