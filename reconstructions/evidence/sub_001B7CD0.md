# sub_001B7CD0

- Manifest: lot 137, position 15; address order. Candidate span: 27 bytes (0x001B7CD0 to exclusive end 0x001B7CEB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A7CD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A7050. REA read_bytes evidence ev_778f4e7a0f178965cab5f9fe987e0f2fc4b033fbb0bfeceae1bf048752ae7b27 returned 27 bytes. XBE raw = derived PE = split = REA; span SHA-256 0961d09d83170b968be62fbb7ac3fa6212274827cc8dcd89ef3db2b81457fed6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 27 bytes.
- Source SHA-256 15e9255c08bc901a3f3e31599c9aa6aad9959ed2ba824f94012454b2c38054b6; compiled object SHA-256 4b6ff6f59808ef6b73c5da82cbf3226617ffe8c21c5f6c7745bfccc5ff6c2e77; candidate object SHA-256 1fe37b2e6ea224ee395cbd7e08498bfccd21af55873ab7324a127cac6ef9d87d.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
