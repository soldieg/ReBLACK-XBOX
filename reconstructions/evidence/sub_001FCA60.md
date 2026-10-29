# sub_001FCA60

- Manifest: lot 144, position 8; address order. Candidate span: 13 bytes (0x001FCA60 to exclusive end 0x001FCA6D).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ECA60; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1EBDE0. REA read_bytes evidence ev_0ac0af4060d4ccb695cd3ac81cb5d2d7cdd7828d90ff009c4e34c388ae546f65 returned 13 bytes. XBE raw = derived PE = split = REA; span SHA-256 ad3a6f9220efb696adc4396ac734a13cdb1add7f8c10918b5db0509d7ea7d17b.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 13 bytes.
- Source SHA-256 debb1f2c592e84afa81471fb33048ac0719a19cb36cb490a8e9800908d488ca2; compiled object SHA-256 3c04af405342b2a18b8ebfe567131b9ff236fb514f1fb2e047794e590ef5c99b; candidate object SHA-256 9babc549f37a9ee6c80d9a9f25d90629b1606b61999d46870b02c5714067e6b7.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
