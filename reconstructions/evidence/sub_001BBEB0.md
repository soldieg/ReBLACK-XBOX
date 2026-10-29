# sub_001BBEB0

- Manifest: lot 138, position 14; address order. Candidate span: 17 bytes (0x001BBEB0 to exclusive end 0x001BBEC1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ABEB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AB230. REA read_bytes evidence ev_31d4697f7e83740ddc2421cbdc8f4926bb96e54fb454ae3c658b26c23975dac9 returned 17 bytes. XBE raw = derived PE = split = REA; span SHA-256 0752ef242641a672c082de534c0f95e79207d8290b01a1fe74fdb0398ddee25c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 17 bytes.
- Source SHA-256 f7dce0676dc113ed31db1fe53c240f874fa67d700bdd97402f51f7e49aa6b137; compiled object SHA-256 1fb6005368bb96546ad1ceb12c491c14c0b587baab30f9cb7906e1ffb6eae220; candidate object SHA-256 e759420f31d2cf947b0d884b16d1e67931956f4881888b76c7db286434bd1474.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
