# sub_0027E8AC

- Manifest: lot 151, position 78; address order. Candidate span: 302 bytes (0x0027E8AC to exclusive end 0x0027E9DA).
- Boundary: Ghidra class procedure-entry; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 1 incoming call sites; callers: 0027de96@0027de6b. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x26B98C; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x26A0EC. REA read_bytes evidence ev_fa9a86badc09bcdba8fec64c153a6725f5c5ed51a5156694b0fbc306c9a3d399 returned 302 bytes. XBE raw = derived PE = split = REA; span SHA-256 c047f56b2c33f04e70869f7b322b36aca79c6e41d99baaeb42f80e20ebadef73.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 302 bytes.
- Source SHA-256 a4987d3ac68eba7c907a67842a303ceefd74bfcc63afc399c634c9fe7cb2e025; compiled object SHA-256 07a0f79741a331a1e282ea422d973736c2517b69d5bd23a09d699637dcb5b5e0; candidate object SHA-256 86474fa895a363ade76303f1afe8903e44f5e7e589f3e96479f767a693c2fd75.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
