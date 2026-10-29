# sub_001BDFD0

- Manifest: lot 138, position 48; address order. Candidate span: 29 bytes (0x001BDFD0 to exclusive end 0x001BDFED).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ADFD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AD350. REA read_bytes evidence ev_022b3300c3be4fb52b8bfa60c7c32b1f68ef1a3195f2e84019eb1f6cbbbcf647 returned 29 bytes. XBE raw = derived PE = split = REA; span SHA-256 b99542561a5aa75ab9c84e1e168f58a57f83a3e11a3804a26b48e2d656edf3d7.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 29 bytes.
- Source SHA-256 a7717d6e58b0aa866dada01177734c9c9091dfafab0f2c70316b21dd0da9ae0f; compiled object SHA-256 4d7ff14ac9d39ff3fffdf071719c441fef3465cab3a85384f931c51b1d8b0f84; candidate object SHA-256 c39aca1dedaa33d1eb7df322e4f44e88ced8225fdfedebe964dcf1721378616c.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
