# sub_001B6CE0

- Manifest: lot 136, position 42; address order. Candidate span: 7 bytes (0x001B6CE0 to exclusive end 0x001B6CE7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1A6CE0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1A6060. REA read_bytes evidence ev_58661e73fd27c470d4d9aee113e14044eb0d0a3f4bd2f82979566fe6bca92c92 returned 7 bytes. XBE raw = derived PE = split = REA; span SHA-256 97e26aa51ee41aa681ab2aa5d96382868b9a3bb24c7bd2f16751537a4a7a8620.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 7 bytes.
- Source SHA-256 1e77e47027a3e1284b5d118c0922524b37cf1396e88b3976c430e4cd5b5072ba; compiled object SHA-256 36f830774d45342d108de9c2a335a0a44273fb4f7cc3ddf53e92f24eae2cd4bc; candidate object SHA-256 7fec35f7338c9191eba7f692c338ffbddcc7ad65eef157b6cd9d00afbcc38f49.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
