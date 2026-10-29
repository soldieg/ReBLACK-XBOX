# sub_000DB7C0

- Manifest: lot 112, position 81; address order. Candidate span: 4 bytes (0x000DB7C0 to exclusive end 0x000DB7C4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xCB7C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xCAB40. REA read_bytes evidence ev_f2fb6f4ea720c35fffc1a99b3944e8a24b7d11a3a8281f509bd2090ce75598e0 returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 1697b83898cd08616eea05084a50bbbc26049c0a6cbc3633694539e763c94483.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 dff24194bcf05ba79b50e43659a281ba8d801c91a0112df1736c1c095f9d4778; compiled object SHA-256 04039305f31677fd4470582bb4ee2e062c228d38b237581aae2ebf31c86769ad; candidate object SHA-256 27e6811e46328293c890b20fb30a610ff0726e4ed38be639b86ccd6d4bc482ce.
- GitHub Issue: #10401 (https://github.com/soldieg/ReBLACK-XBOX/issues/10401).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
