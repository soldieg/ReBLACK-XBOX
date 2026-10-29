# sub_001B5AD0

- Manifest: lot 135, position 47; address order. Candidate span: 1 bytes (0x001B5AD0 to exclusive end 0x001B5AD1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A5AD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A4E50. REA read_bytes evidence ev_2b7cab1476e8f43be827d01708d1a0cb970d9cfa9c9586d9db53cde17630eabe returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 63e96449a4dee79f5842e788972cc519c4a0217d4de241aea75dd995641b198f; compiled object SHA-256 6f83dcf8f2bbf5ae6f6e43497ee9cc8fd0840bd9024a77b9a07b5d6d76e5c407; candidate object SHA-256 f4af277b05709dd791bfdfa08365e0ccb712ae5b54b0b705c7caf7fe3b4493f9.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
