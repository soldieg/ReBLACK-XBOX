# sub_001F2CF0

- Manifest: lot 141, position 96; address order. Candidate span: 1 bytes (0x001F2CF0 to exclusive end 0x001F2CF1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2CF0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E2070. REA read_bytes evidence ev_19b321a6eff71bf21466ca87d57dcccf35a09c73e67766ca3e35875c5697913f returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 b835a4c001bfba050ba99df87aad5201606643f7410a5f01d1781521c8ba46c5; compiled object SHA-256 24c170a3079b65b2a0155395345fcfa816679d5cc4e2f3ecb3b395509a5536d1; candidate object SHA-256 b183a15e37c256edc5d7009fa2585958c006b8f5959621df9dcd202baf630797.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
