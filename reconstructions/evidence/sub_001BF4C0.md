# sub_001BF4C0

- Manifest: lot 138, position 60; address order. Candidate span: 17 bytes (0x001BF4C0 to exclusive end 0x001BF4D1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1AF4C0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AE840. REA read_bytes evidence ev_147e657336e4266c0f34b39d6edafc248f54098158f8ecad13d022e3016e05fc returned 17 bytes. XBE raw = derived PE = split = REA; span SHA-256 0752ef242641a672c082de534c0f95e79207d8290b01a1fe74fdb0398ddee25c.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 17 bytes.
- Source SHA-256 30aeb5d189385bf35d3888218c0767033b0ee6cd60f7f0edf6def5c70265a19f; compiled object SHA-256 3fc74d71811ebbcddc9b6e374227770aad7f07b0b7219614b6bba31ff512600e; candidate object SHA-256 a95194eb1308af91518b775258f37581cd430b6e084c130fab63bee909056eb3.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
