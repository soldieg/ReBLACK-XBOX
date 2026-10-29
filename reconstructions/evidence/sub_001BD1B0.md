# sub_001BD1B0

- Manifest: lot 138, position 20; address order. Candidate span: 20 bytes (0x001BD1B0 to exclusive end 0x001BD1C4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AD1B0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AC530. REA read_bytes evidence ev_d851a3d9415b5acec31f4b510cc91faf49d78ea40f250c0b431a2599253c8162 returned 20 bytes. XBE raw = derived PE = split = REA; span SHA-256 93c598cff0a45366e5c765f1d9df74085ae8d008773bf6374b2c53187bc262de.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 20 bytes.
- Source SHA-256 e2271cff7dd8ef2d4da3a0cb207911bcf27942686fef1d351bc36eeb4c496979; compiled object SHA-256 07911ee17c495430378feeaceed3d566ae0ba21a2e2e12bd433a324c1bc06b13; candidate object SHA-256 55f92350458c4d23bfa6bbba5a82449aab043f2fb259b06f5f2db53d16318f01.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
