# sub_001E4DD0

- Manifest: lot 140, position 1; address order. Candidate span: 152 bytes (0x001E4DD0 to exclusive end 0x001E4E68).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1D4DD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1D4150. REA read_bytes evidence ev_bee088b572a1f0317679b043d15eef5ac7efba0ef2708a2809f45de915b64de6 returned 152 bytes. XBE raw = derived PE = split = REA; span SHA-256 7f3439792aec1af512c698b9d05d90e1327f40b659a3aa306fe4338c17376302.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 152 bytes.
- Source SHA-256 5a09f81d17c4692d74f24d3d099126ad4212b0feb839407f5520a0fa823f4d02; compiled object SHA-256 802f207f4a735490e23680af9e79bd057404bd6762738df7d1eb27eb3ff7550f; candidate object SHA-256 494863a9c0ed0f22889d3c27b430fa9610df055b6ba9ebf3b7868a293a66ed15.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
