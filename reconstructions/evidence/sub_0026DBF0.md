# sub_0026DBF0

- Manifest: lot 151, position 30; address order. Candidate span: 63 bytes (0x0026DBF0 to exclusive end 0x0026DC2F).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x25E370; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x25CD10. REA read_bytes evidence ev_3a0c5e2a7d5bcc7afd326780f506624759c5488d4dea84f19197057a274f80c3 returned 63 bytes. XBE raw = derived PE = split = REA; span SHA-256 f799562d86ab13ccb77a5feb8a06339c9b863b6d8d7efab5f9e6c5241f0b86ae.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 63 bytes.
- Source SHA-256 95db891afc1417e5ed02f3b3616aae4ee9647b09070df0438ab0f943a67d36c3; compiled object SHA-256 dcd22ada9dbdff5260c9bd88dde937b52d609ba1cc7f8e4e1a48c02a4dd3ca80; candidate object SHA-256 fd294f7f29a6d89426b8aa065179e0c2f145cc8d1362befe7b53f72fcce62ec9.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
