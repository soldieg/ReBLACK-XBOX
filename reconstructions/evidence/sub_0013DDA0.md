# sub_0013DDA0

- Manifest: lot 121, position 20; address order. Candidate span: 27 bytes (0x0013DDA0 to exclusive end 0x0013DDBB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12DDA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12D120. REA read_bytes evidence ev_048112fbef64b0eef86536aaf4b53de46ad7f549b678a46ec56560f7ab6d8fed returned 27 bytes. XBE raw = derived PE = split = REA; span SHA-256 6dd4a989a40fcafe598204ca7618396bd2bbc942c251e323b63e9e01b644b5d8.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 27 bytes.
- Source SHA-256 7ab1a3511e6d8851ba6f29c68a15203fdeaa33af585647cafffdeccc1dc10dfd; compiled object SHA-256 aa1c0304bf3375530b2b7b1b78b0c453c88c4096950564ee7123a965b415ceb7; candidate object SHA-256 932cac59740c70eaa1fa88fbc95b2f15a791354e13afe691c692f75d5cbc0bc3.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
