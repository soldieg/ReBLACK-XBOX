# sub_000F1BE0

- Manifest: lot 114, position 90; address order. Candidate span: 110 bytes (0x000F1BE0 to exclusive end 0x000F1C4E).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xE1BE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xE0F60. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 110 bytes. XBE raw = derived PE = split = REA; span SHA-256 b143e8b6c0ad8061df3416071749bc07180f28d1aecc5fc1ae472f9b01a45296.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 110 bytes.
- Source SHA-256 cd7aaa33ec6f1f926e15ee1ec9b2d662831a2013329d42f9fe5dff32d5959893; compiled object SHA-256 8b8957bf692399e308593fd99add16eea625238452add9bb93685d035379a2de; candidate object SHA-256 5606a6954f00721a00027858055ca6a95ff370a2c94236683ac7e0b2afc69c2f.
- GitHub Issue: #10592 (https://github.com/soldieg/ReBLACK-XBOX/issues/10592).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
