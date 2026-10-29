# sub_000BEBA0

- Manifest: lot 109, position 24; address order. Candidate span: 7 bytes (0x000BEBA0 to exclusive end 0x000BEBA7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEBA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADF20. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 7 bytes. XBE raw = derived PE = split = REA; span SHA-256 3e6af0327d6f0c4d7902f49830eaf2907019c207382d04b7fa723ab8158ab62b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 7 bytes.
- Source SHA-256 84c499fa36d1ad17c4b2a2127f1cf45297785f82e553468c8bfaab87c7814bc7; compiled object SHA-256 7dba1572017cfd539e2f81f8c402e34d6247f9dae9e27b6e3fd2af3a575ad109; candidate object SHA-256 cb51fb829f7e4e06e64357e453f7dcb59f93681fed9492d8168610d4802fea82.
- GitHub Issue: #10131 (https://github.com/soldieg/ReBLACK-XBOX/issues/10131).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
