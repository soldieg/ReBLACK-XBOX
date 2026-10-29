# sub_000A6C1A

- Manifest: lot 106, position 23; address order. Candidate span: 67 bytes (0x000A6C1A to exclusive end 0x000A6C5D).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x96C1A; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x95F9A. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 67 bytes. XBE raw = derived PE = split = REA; span SHA-256 d3aac27ede06a10ca8498be1efdc6b99e442b96dcbd68576eba1aedaf984f0e6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 67 bytes.
- Source SHA-256 a9f4e0999d90e6c08e150bed82bfd1506fd9395c7609d3b87a8b181a57293458; compiled object SHA-256 42b0ef6391f5e416ef6208c961aab4f4871e77e44f11ef1628bc6291866983a3; candidate object SHA-256 5efe40bc7bdd085dc701690a5dad9e326122581a5b8f0fc357e5d79bcd905fa8.
- GitHub Issue: #9856 (https://github.com/soldieg/ReBLACK-XBOX/issues/9856).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
