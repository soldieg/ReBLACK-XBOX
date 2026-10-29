# sub_001BA1F0

- Manifest: lot 137, position 79; address order. Candidate span: 30 bytes (0x001BA1F0 to exclusive end 0x001BA20E).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AA1F0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A9570. REA read_bytes evidence ev_8089996f5e8887c4d87028c61313ab0628b53d019d0c01db01fa158942313b4d returned 30 bytes. XBE raw = derived PE = split = REA; span SHA-256 cd9b7582e76ec4ab4cebe2ed1e1ca15bed4622113f1358d4c3524dfd7bc1bb5d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 30 bytes.
- Source SHA-256 689213c524cd1efff14c09be3749dc7e1ff80cfc83b297cb4bdfcec3d14e7c55; compiled object SHA-256 a7b7f2ea9af09190250e6a40a50e306109386445698279ce896f89cb31a81602; candidate object SHA-256 26b90cbf4110e9e3768dada5a08661458435977147e023786eea731afb021bdd.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
