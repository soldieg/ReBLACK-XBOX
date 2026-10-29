# sub_001BB8B0

- Manifest: lot 138, position 4; address order. Candidate span: 7 bytes (0x001BB8B0 to exclusive end 0x001BB8B7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AB8B0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AAC30. REA read_bytes evidence ev_690d1fcc1860fd0f9bd9a0be1c867125e197077d1219fe9be337ededbe8d6cd5 returned 7 bytes. XBE raw = derived PE = split = REA; span SHA-256 635be9f3bd65fc0494537cb14200544ac6e92464121b7b2630a81c006bd3653e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 7 bytes.
- Source SHA-256 9992da2c19174aa6966f7308838eece0fce2ec53fe96bb8c4dfd3529e6717ce0; compiled object SHA-256 c3ba67ac10099bcb58b548e5f98ba735567348e3109c2439e27e184def7bdf73; candidate object SHA-256 87d7a58c71c50a3f9f5fa193383a0bf9f7dc5a5af2714e58fcf7c616f846ff3b.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
