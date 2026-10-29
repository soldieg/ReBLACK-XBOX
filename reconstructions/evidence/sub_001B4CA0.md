# sub_001B4CA0

- Manifest: lot 134, position 70; address order. Candidate span: 4 bytes (0x001B4CA0 to exclusive end 0x001B4CA4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A4CA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A4020. REA read_bytes evidence ev_79c26d1fd72c4338ece4bbe93c59fe33cade7aa08d2a3e1794ce5a514eb30763 returned 4 bytes. XBE raw = derived PE = split = REA; span SHA-256 c1cdc8e79cb47170caa60f10608a717163ed9af405ef97b1fe77d4bb5243d52e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 4 bytes.
- Source SHA-256 6df5bb3e3065885f556ae0e0af7b566402351286371294777af30aa93a2f495f; compiled object SHA-256 dbcf9c0156681c080f24309d2596666486eeaf2915175d1455858ad0f588f616; candidate object SHA-256 0cd9017c275a1ce813b57c902843841d6014d8a8099352a90a7ac9b5ef9bf8a3.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
