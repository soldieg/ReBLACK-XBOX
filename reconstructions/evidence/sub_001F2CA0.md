# sub_001F2CA0

- Manifest: lot 141, position 92; address order. Candidate span: 1 bytes (0x001F2CA0 to exclusive end 0x001F2CA1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1E2CA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1E2020. REA read_bytes evidence ev_b64e5fdebaa5678b4b25509d9f05ea80754e17b465e2ff9edadaf33e28561e53 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 8c3b06732c440768b675d7d8f02b6522b709697399a8ad558705a606ac2470c3; compiled object SHA-256 b1cdad79c774f65afb8664e59bbee6df9cff482448d2ba73f47ff8377f0dc32e; candidate object SHA-256 ae2470f00d383b850d2f712da13789c7c063b8a472eb7a8b16f75684ebe45ba9.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
