# sub_000F1EA0

- Manifest: lot 114, position 93; address order. Candidate span: 162 bytes (0x000F1EA0 to exclusive end 0x000F1F42).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xE1EA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xE1220. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 162 bytes. XBE raw = derived PE = split = REA; span SHA-256 29e30171bf1eda26b4e3cf1e6068324b0800c6484c72a95ee0390bf1e571e19e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 162 bytes.
- Source SHA-256 fddf76ee60977a6d0ada8495f478826c9056d2c4eecf31a823a146fd9755abef; compiled object SHA-256 9ebc2db2362a2b05e0b3c7caff0e5c8cb57f5dab08d8f5d53bef2c8883022ad2; candidate object SHA-256 2f30647ca13a1a683a0028cff7bf977037001c41bfda1288c17ba7692dd01669.
- GitHub Issue: #10593 (https://github.com/soldieg/ReBLACK-XBOX/issues/10593).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
