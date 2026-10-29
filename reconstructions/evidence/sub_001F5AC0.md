# sub_001F5AC0

- Manifest: lot 143, position 26; address order. Candidate span: 6 bytes (0x001F5AC0 to exclusive end 0x001F5AC6).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E5AC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E4E40. REA read_bytes evidence ev_9678a6ef7043d67a96dfe98ae0ad862e1db5d4808fd9172c8c2e75776234ac1e returned 6 bytes. XBE raw = derived PE = split = REA; span SHA-256 fea63f8312b075844a57b373a47cfb6bf51873fafce9ee2b8999f617959a8485.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 6 bytes.
- Source SHA-256 44590763ad4274717687ad105fee1b9be3b1d9664a592f9a447caa4775bd035b; compiled object SHA-256 96c50dc4668efbf6c6002676a77ebd68fa7fdcaebecd32df6c07f0cf79e54e19; candidate object SHA-256 03edd388bffbe2b9adb6404cac8a545e03839c3191d28919b7d6f4c5ed42fe09.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
