# sub_001F8CB0

- Manifest: lot 143, position 79; address order. Candidate span: 242 bytes (0x001F8CB0 to exclusive end 0x001F8DA2).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E8CB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E8030. REA read_bytes evidence ev_a299d90905930393e12ab069640679911d8d719c300f70d734304e32651aea48 returned 242 bytes. XBE raw = derived PE = split = REA; span SHA-256 c4370bef6f6bbcb6c5fe4f68795cba7de49f32d3eb00c3af331ed85bb7fb9fd9.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 242 bytes.
- Source SHA-256 123e1c6825fe51884b4320f3c2321202c227b2834efa9e8249be9857ccc5706f; compiled object SHA-256 621715d505fb5f2a16eb11e7098768d7409606ede077971c7d0229ee8744313a; candidate object SHA-256 72d30f68f0f8b909a20cf050e502867c875868220dda3c15477a6145fd9bc3d6.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
