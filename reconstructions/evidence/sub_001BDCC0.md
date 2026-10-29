# sub_001BDCC0

- Manifest: lot 138, position 39; address order. Candidate span: 25 bytes (0x001BDCC0 to exclusive end 0x001BDCD9).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ADCC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1AD040. REA read_bytes evidence ev_276612a0e2d6cd86efa9534159aba8a7deafe38a60430b80c34ff9c8720e11c1 returned 25 bytes. XBE raw = derived PE = split = REA; span SHA-256 953c12ac60d0dc4b59dd38ff6591548975cd2a54f7b73161da6af15670b19b92.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 25 bytes.
- Source SHA-256 e88d3351e58aa4c0586f94618b25965caa5c6243da5a8e04801503ee0345e0f8; compiled object SHA-256 6ece6bded32dcb5fa6776327b344bc848e4c8b3ece5dfc7488b9bc8419a03701; candidate object SHA-256 4017ead731954d31dbde16d65814a27a8ef73320b3ff495254fa56895dd5d925.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
