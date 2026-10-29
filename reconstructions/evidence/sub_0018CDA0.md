# sub_0018CDA0

- Manifest: lot 132, position 26; address order. Candidate span: 30 bytes (0x0018CDA0 to exclusive end 0x0018CDBE).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x17CDA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x17C120. REA read_bytes evidence ev_57b1983ff20f56ac934fb8caa22189872ad804ba8bad28fc508f5dbdde9ab3ff returned 30 bytes. XBE raw = derived PE = split = REA; span SHA-256 992c3912dae92af976ee783dda3e209c0a555b9b1371916780c8b3c61d0282a7.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 30 bytes.
- Source SHA-256 0c3254c080b2a811e17a5b02e8508f812b4f2b934759e3a8d01e5d1f94167f3e; compiled object SHA-256 2271517ec6be4ad51af8b5d97cb52a9e635a43a37a27f09462cdff23469734d9; candidate object SHA-256 b716e77f66ca23311ac612b85d1c43078d75f731116f2933b531690bd8d42645.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
