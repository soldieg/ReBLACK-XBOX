# sub_000BAC20

- Manifest: lot 108, position 69; address order. Candidate span: 26 bytes (0x000BAC20 to exclusive end 0x000BAC3A).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAAC20; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xA9FA0. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 26 bytes. XBE raw = derived PE = split = REA; span SHA-256 0f106b55eb06f80855df06785b83fa60c74dd69aee845cef32c7b6f79574ee78.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 26 bytes.
- Source SHA-256 f8146762629cd858bf066192e457793fb9a6d2043b1e37ca28c4842b4ed5f697; compiled object SHA-256 354485faa39dffd6c915b11d91035c5fc9b6470019a158ac569830475159d7f9; candidate object SHA-256 67a8c0abf3d3fb8e9a47fe0d33a3350894968daaaaa002e8dbf4d09e1204b932.
- GitHub Issue: #10082 (https://github.com/soldieg/ReBLACK-XBOX/issues/10082).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
