# sub_001CBF00

- Manifest: lot 139, position 21; address order. Candidate span: 64 bytes (0x001CBF00 to exclusive end 0x001CBF40).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1BBF00; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1BB280. REA read_bytes evidence ev_839c1e9344a3e6111421ecd847ade302d3791536fe876a158cbfdd7e684f4795 returned 64 bytes. XBE raw = derived PE = split = REA; span SHA-256 14beb30d0abd1f8631263e2c115680904e0d67c7edba22ae02acaf00c2a8db8c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 64 bytes.
- Source SHA-256 463c3bda3111957ec25b8c5b4e93c3d6e2283f2cc1196e90d069fc4e69912b8f; compiled object SHA-256 6ef70a3dfa07243a745754cf4015675cb0670c63e820c7b5b8ab1deac8c15edd; candidate object SHA-256 a2b47dec8ebcd485a1d40f96c49b698e54bd5229aeda2a6810c49531df133209.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
