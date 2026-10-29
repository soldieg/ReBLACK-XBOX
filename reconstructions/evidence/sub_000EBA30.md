# sub_000EBA30

- Manifest: lot 114, position 81; address order. Candidate span: 502 bytes (0x000EBA30 to exclusive end 0x000EBC26).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xDBA30; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xDADB0. REA read_bytes evidence ev_7cc9971802cfe3e178b9c54152159ea0f4bd297ff60a83b0bdda27d591587e52 returned 502 bytes. XBE raw = derived PE = split = REA; span SHA-256 1df5e1b295f3cfb6c78eb18e9e556b0c15b13d563c3e3b5a930d786e72c971f7.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 502 bytes.
- Source SHA-256 0b1d8ee537ad85611bbdf4b182a47e2e4ebe6107ad842dd44b625457170d1fd7; compiled object SHA-256 3944003bd350af68d5e2bb5ac5b595ef0a93a8cb4ca8d6f89df53f2f1fe25f93; candidate object SHA-256 2906b8bd8f47171e76a94698af41d309c00a96b012b749fb23ae139625d07eb6.
- GitHub Issue: #10584 (https://github.com/soldieg/ReBLACK-XBOX/issues/10584).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
