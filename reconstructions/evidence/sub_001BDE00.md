# sub_001BDE00

- Manifest: lot 138, position 43; address order. Candidate span: 12 bytes (0x001BDE00 to exclusive end 0x001BDE0C).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ADE00; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AD180. REA read_bytes evidence ev_a3abdd76958be7f4031b6a28cb2f40b67c8f3f3ea9ecde3ecd6ca50ac2c113a1 returned 12 bytes. XBE raw = derived PE = split = REA; span SHA-256 0c7a67a6dd46193023d75728d20a99056a4248082631d5aa1aed9799072ff20d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 12 bytes.
- Source SHA-256 76a524d44849cd1eea97419c54a51ee86b4c1124311af7ab681248f27aee47da; compiled object SHA-256 01c54d301d58c6cf03f163a3f96122f5d687349816a0d7bada2cd84bafb610d6; candidate object SHA-256 d5ee6c7cedf8f14481a3577b33622acd515756bd40170f331872294a936a08c6.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
