# sub_0012ACC0

- Manifest: lot 119, position 84; address order. Candidate span: 60 bytes (0x0012ACC0 to exclusive end 0x0012ACFC).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x11ACC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x11A040. REA read_bytes evidence ev_8fdf019b3c27f76bd756d1c5e4db9613c88c3d0f794792c2e85c2f9f8a639970 returned 60 bytes. XBE raw = derived PE = split = REA; span SHA-256 d6678d363de9625ee6d60a02d0364780fe11237b2a82146e3f3442d93ba1ca9e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 60 bytes.
- Source SHA-256 65eed758c49568030f89389d54a78b8f8d3fb0b5784f296c7dce033a8761c522; compiled object SHA-256 ca4239acc86447d88e1ad4b3bde32329818dcbbc5a2a38e9715347c04062bcc4; candidate object SHA-256 3750f6bf139b6adda125fe02da162ab1511cf90c4bb5c0cd366bbca42b8c2736.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
