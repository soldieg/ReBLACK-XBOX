# sub_0012ABB0

- Manifest: lot 119, position 76; address order. Candidate span: 1 bytes (0x0012ABB0 to exclusive end 0x0012ABB1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x11ABB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x119F30. REA read_bytes evidence ev_0b0045f89176bc110ea45592e695bd90e3720bc490bfcbcda1a1bd8e67cb88a7 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 8c5875cdc05e4cc1572bdec1d59f66fae0f70ed1adf9e4aac42401c51012a6ca; compiled object SHA-256 68376b776bd54b80f22ea47e3bc1718dda7eb05f3eb6a2414aecbeff2e719e44; candidate object SHA-256 b67582843ad69369ccf5aec0ee7fd00d883f0010409c2f8e2f26afe068c4d9cc.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
