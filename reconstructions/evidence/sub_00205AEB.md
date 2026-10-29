# sub_00205AEB

- Manifest: lot 144, position 36; address order. Candidate span: 52 bytes (0x00205AEB to exclusive end 0x00205B1F).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1F5AEB; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1F4E6B. REA read_bytes evidence ev_56a3ed26a7343113317ad34372f97a871f6eb5393d7f0ca701eaf758654c42e3 returned 52 bytes. XBE raw = derived PE = split = REA; span SHA-256 2e7d35e35f7f41ebf63b1cdca10e973d5f19f082359eb9ba12fd027ec0f894c3.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 52 bytes.
- Source SHA-256 a191596c79082e6704142cd7bbfa8c7b09f9f0ae17ca3e25f054488138d35b17; compiled object SHA-256 da54b40e42167655348cae4d706e7e3386bd1f1ff3b28bcfe068da3a7cd61bc7; candidate object SHA-256 5a3ccd61621f6100f95604822f3e27c50016706ca436da85f9a9b1ed50fe5e29.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
