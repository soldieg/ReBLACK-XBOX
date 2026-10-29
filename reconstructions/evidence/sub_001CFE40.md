# sub_001CFE40

- Manifest: lot 139, position 38; selected in ascending candidate order for lot 106. Candidate span: 257 bytes (0x001CFE40 to exclusive end 0x001CFF41).
- Boundary: Ghidra crosswalk has no procedure at 0x001CFE40. Boundary basis: preserved-register prologue, terminal RET, and a pointer to the entry in .rdata (raw file offset 0x27CCF0); direct incoming-call export: 0. This does not resolve indirect callers or ABI.
- Original XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6; raw file offset 0x1BFE40. Derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd; offset 0x1BF1C0. XBE raw = derived PE = XboxRecomp split for the full span; SHA-256 6d536f6266ec4723b709daf89989f60513986f8e123493bc77f414e6cb8bd707. REA read_bytes evidence ev_94f9b5e8db4f3fd90320bcacaff9831eb83422e1e203146834e0439b39b0bbb1 returned 257 bytes with the same SHA-256.
- MSVC x86 compile passed with /W4 /TC /c /O2 /GS- /Zl /Gd /Gy. ObjDiff 3.8.2: function symbol 100.00%, .text$mn 100.00%; source and candidate object sizes are both 257 bytes.
- Source SHA-256 10c6a3ac098006f4b0ff6ba0cd8f11cfacff3420c8604e73c3d7327d34c44941; fresh object SHA-256 794df4132d61b6add961578b2126d9df19c9f5b9aea890dc08335ff7d888ff5f; candidate object SHA-256 fd2586e246c159ab2c772ef54c9c077edbc396f31141fd00c390c3635fe2179e.
- GitHub Issue: #9278 (https://github.com/soldieg/ReBLACK-XBOX/issues/9278).
- Source is an address-pinned byte emitter, not semantic C or a formal ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.

## Lot 139 manifest candidate evidence (2026-10-29)

- Manifest: lot 139, position 38; address order. Candidate span: 257 bytes (0x001CFE40 to exclusive end 0x001CFF41).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1BFE40; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1BF1C0. REA read_bytes evidence ev_1e9c9c86a172b8f7a5faa40ed7fe08a5ece9a1daea5a8f8698e995fe21146621 returned 257 bytes. XBE raw = derived PE = split = REA; span SHA-256 6d536f6266ec4723b709daf89989f60513986f8e123493bc77f414e6cb8bd707.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 257 bytes.
- Source SHA-256 10c6a3ac098006f4b0ff6ba0cd8f11cfacff3420c8604e73c3d7327d34c44941; compiled object SHA-256 8dbc63051454a0de0db0460e140e2d744e3ecc408e3f576991a0c34a67026ad9; candidate object SHA-256 fd2586e246c159ab2c772ef54c9c077edbc396f31141fd00c390c3635fe2179e.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
