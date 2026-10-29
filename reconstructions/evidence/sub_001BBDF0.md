# sub_001BBDF0

- Manifest: lot 138, position 11; address order. Candidate span: 62 bytes (0x001BBDF0 to exclusive end 0x001BBE2E).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ABDF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AB170. REA read_bytes evidence ev_553e7d26dc5131b22efeed8e529c57af7cf726fdff2e1d810cfd97a299d8bc4c returned 62 bytes. XBE raw = derived PE = split = REA; span SHA-256 df13b5927c0f1e51d1f24616ee412db6271fafd9e48be3b3edffdcb217637a4a.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 62 bytes.
- Source SHA-256 e347aceb4e504cfbcdec231091b81525f33713e1175bc70f69c0a80f905e67c2; compiled object SHA-256 3abb69db29472be1e7143b22fe4f28cb3c0c7f6a1f332fa5f27a1f5ee2d3204f; candidate object SHA-256 a03a39fe0cd3dc7e749c3a4e14f82d8a34336c61dce8b5af7a1b432d7494e09a.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
