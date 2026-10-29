# sub_001E4FB0

- Manifest: lot 140, position 2; address order. Candidate span: 171 bytes (0x001E4FB0 to exclusive end 0x001E505B).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1D4FB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1D4330. REA read_bytes evidence ev_dc2fd9bf116a79c7bd8e8d59dfb887d931cc4c14e28cd42c486e041e6e913dc8 returned 171 bytes. XBE raw = derived PE = split = REA; span SHA-256 d2e30dc927f746ae620a9d7df56dc85458dea62af5ea548127c2c236fc751e74.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 171 bytes.
- Source SHA-256 a92499ef04f2609b2c5781deb73e3f92695d9939336aafa7aaced4421cfe3d6f; compiled object SHA-256 b0ea11d0d1e5373d6fccd8a18338f9d79de4327c44ed5fc4aac35eb9d5709f60; candidate object SHA-256 19ed1b299e7ad426f1a977b85ba4231d783f7f5d1baa1499d0f6677ae111e546.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
