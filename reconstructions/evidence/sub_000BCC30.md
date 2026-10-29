# sub_000BCC30

- Manifest: lot 108, position 88; address order. Candidate span: 16 bytes (0x000BCC30 to exclusive end 0x000BCC40).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xACC30; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xABFB0. REA read_bytes evidence ev_0f908a9dee8d064b6f440b34966d95125cdc0c71493d2783ff86fe320c995cab returned 16 bytes. XBE raw = derived PE = split = REA; span SHA-256 ffe1874ee2ab51dd40b7d167b3e48b30e6780377679357cfbdc2a3d45f0ee86e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 16 bytes.
- Source SHA-256 15210a7d40b91f709a171a567dd5dc872df2b4035c8031cf141f33470a4c150a; compiled object SHA-256 3d3d87090788d03784d4aef482cfcee1edbf17b24949d8181b925c5eb159eb8c; candidate object SHA-256 09075f3a7c21a3265aca6505ed1e7aafde94d2b87b7b00f63438a44e76b2620a.
- GitHub Issue: #10100 (https://github.com/soldieg/ReBLACK-XBOX/issues/10100).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
