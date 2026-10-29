# sub_000A6E2B

- Manifest: lot 106, position 28; address order. Candidate span: 82 bytes (0x000A6E2B to exclusive end 0x000A6E7D).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x96E2B; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x961AB. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 82 bytes. XBE raw = derived PE = split = REA; span SHA-256 324ccd47ca0eb1c02ec9ca6acc08444c6cba797cca5cb5547c279272398bbd5a.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 82 bytes.
- Source SHA-256 6a41696bee52ba3ab3f8cff129385364af0f4f00f8bf5c1aaeddc2a64db57d01; compiled object SHA-256 ea9bde8eb93221df868515c67e1d82b6a49d8614f50eefb790e73dcf515446cb; candidate object SHA-256 a2fa1adfd5dd04baa3f60cd2fb87c9057a011aa4cd4656053f17c54bda19c3ba.
- GitHub Issue: #9862 (https://github.com/soldieg/ReBLACK-XBOX/issues/9862).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
