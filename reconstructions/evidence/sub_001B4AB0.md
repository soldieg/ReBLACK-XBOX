# sub_001B4AB0

- Manifest: lot 134, position 56; address order. Candidate span: 29 bytes (0x001B4AB0 to exclusive end 0x001B4ACD).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A4AB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A3E30. REA read_bytes evidence ev_b9d7adb18d87a109f17ef9f12350b0326a75bf49039d2ea88620b1970cb0b916 returned 29 bytes. XBE raw = derived PE = split = REA; span SHA-256 4173230b9f85d8327734fa6c4659db2e407ca720dd9475c900d863d617b8368f.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 29 bytes.
- Source SHA-256 83e1d8504f1175a4e8134eae18d2f714206722988071fb0d93d870a978038522; compiled object SHA-256 60ba8a72ff124bbcd4408f0948b9d978305ce62222d2ea699d46c916cd20d026; candidate object SHA-256 be3c3375ba5ce83d644b2d0b62bb2a47db6a52b60fdf5a8a5f23eb7d4fa1a332.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
