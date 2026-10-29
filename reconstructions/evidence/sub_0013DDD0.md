# sub_0013DDD0

- Manifest: lot 121, position 22; address order. Candidate span: 15 bytes (0x0013DDD0 to exclusive end 0x0013DDDF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x12DDD0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x12D150. REA read_bytes evidence ev_84309906f9cde902bc9e7e4cdcb8408373eb823c52000ee2549cb7fddca03d17 returned 15 bytes. XBE raw = derived PE = split = REA; span SHA-256 12ec43dd1f750acf1d700d835b57682354c6755b90814db7aa0e3c4f8752a1bd.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 15 bytes.
- Source SHA-256 4cb0779ccaebce7c81db2e78cb591f8aa992a8e632e765b027d7e480f1fa6017; compiled object SHA-256 c6abdccf4296a880e6a2179ddb0c37b633bf561e692bee797e0b44fec1c2cd95; candidate object SHA-256 0b88fef89deac23b902fe097e50aad692f505f6ec0137eba6e79345640ff574d.
- GitHub Issue pending: GitHub API secondary rate limit is active.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
