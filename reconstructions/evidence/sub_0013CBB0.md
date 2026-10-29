# sub_0013CBB0

- Manifest: lot 120, position 61; address order. Candidate span: 1 bytes (0x0013CBB0 to exclusive end 0x0013CBB1).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12CBB0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12BF30. REA read_bytes evidence ev_fd1f5afc0e891d78423e868e5a65375098205522b16bd6dbfcc1600510375d81 returned 1 bytes. XBE raw = derived PE = split = REA; span SHA-256 ae3f4619b0413d70d3004b9131c3752153074e45725be13b9a148978895e359e.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 1 bytes.
- Source SHA-256 a00511d1a167611ebc41cd34b64d3b8eff770a66cc044ec74f9d72fc05508648; compiled object SHA-256 82c5a712bdf5b20a7e2048fc4505508f303926e9d6c2b5f1522169a703067222; candidate object SHA-256 0e574a7b96f71513113415f1db9a7043cd0ebf315fea4b2b21b89c43a32fdde4.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
