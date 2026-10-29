# sub_000BEAB0

- Manifest: lot 109, position 21; address order. Candidate span: 24 bytes (0x000BEAB0 to exclusive end 0x000BEAC8).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEAB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xADE30. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 24 bytes. XBE raw = derived PE = split = REA; span SHA-256 b89fea9e6e0cc2f14fcce810305878841b2dd48ad34b30c8ace9f7fe36ca728a.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 24 bytes.
- Source SHA-256 abe44055730fc70b1ba6053b3d8f4dc54b971411275412dae28974128a49fc36; compiled object SHA-256 b653506fb8dca16bbde179b1c66376fb2a155110c9f7edbe6beefa5d569416f9; candidate object SHA-256 894d6ad76717a8a8a2a9dcb87b202e5af63ce3275122544d08d3d6120add8486.
- GitHub Issue: #10129 (https://github.com/soldieg/ReBLACK-XBOX/issues/10129).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
