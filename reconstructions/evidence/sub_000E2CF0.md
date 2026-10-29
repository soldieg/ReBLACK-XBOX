# sub_000E2CF0

- Manifest: lot 113, position 37; address order. Candidate span: 4 bytes (0x000E2CF0 to exclusive end 0x000E2CF4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xD2CF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xD2070. REA read_bytes evidence ev_56ef72f9733ca0262c63b2fa5e10250f334b561276e69a948713a9334a799ca4 returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 1697b83898cd08616eea05084a50bbbc26049c0a6cbc3633694539e763c94483.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 943346cac1254a264bc8da11cd61194affed4d2392333ce39b1708251aaf6f8c; compiled object SHA-256 03fc197b583b63082347975020aedcd8a441befffb66f3d54ebb388c440325a5; candidate object SHA-256 75379be1dc933561b30126491a2343367bc8a7ecdbff6c833052301ebac5bd8a.
- GitHub Issue: #10452 (https://github.com/soldieg/ReBLACK-XBOX/issues/10452).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
