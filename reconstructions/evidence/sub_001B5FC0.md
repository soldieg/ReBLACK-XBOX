# sub_001B5FC0

- Manifest: lot 135, position 77; address order. Candidate span: 26 bytes (0x001B5FC0 to exclusive end 0x001B5FDA).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A5FC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A5340. REA read_bytes evidence ev_ca9798d36a0675c30b1358bd05889c1ac9c079f2781148c9d601a70452af2328 returned 26 bytes. XBE raw = derived PE = split = REA; span SHA-256 56b9df6e36167193be18556c2104dc70451ebc54f192989d85032aaac2e08190.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 26 bytes.
- Source SHA-256 0f4c23daf999f387d12b13df8fed520ea0273a370d08ea9e8a22e9c7f7aa4e6d; compiled object SHA-256 8acfeafce3a60ec6495c25d5d620cd8df20443e52a12a069cef5fd497a972f7d; candidate object SHA-256 683be86ddf76a3ef6b05e6f5d0177402e82815054afc93b76c15befe49829cec.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
