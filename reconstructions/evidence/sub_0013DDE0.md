# sub_0013DDE0

- Manifest: lot 121, position 23; address order. Candidate span: 27 bytes (0x0013DDE0 to exclusive end 0x0013DDFB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12DDE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12D160. REA read_bytes evidence ev_6f20f87bf10a50bee7ef8001c4d9e72a98fe60e60fcede79a0869c4898a3d02f returned 27 bytes. XBE raw = derived PE = split = REA; span SHA-256 2ff6a9ac670ec1e24631e83352b7a5737be6ba3769b1f6b4e44c6e00e056342d.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 27 bytes.
- Source SHA-256 3183628c711a81195555548633d5dd9cab96ea4a147d3667f3ec455b4ed5029a; compiled object SHA-256 8e2159d1dff62c6a6fc115573639679e52fdd3a5f08c81c7928a8e58a559a1a7; candidate object SHA-256 116c6a637589ac86f77b64d01550473daa7a298e6f63dc78e0549eaf47337c1a.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
