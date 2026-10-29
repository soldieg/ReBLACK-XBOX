# sub_000AA4CC

- Manifest: lot 106, position 71; address order. Candidate span: 3 bytes (0x000AA4CC to exclusive end 0x000AA4CF).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x9A4CC; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9984C. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 3 bytes. XBE raw = derived PE = split = REA; span SHA-256 849f48aadaada9f124f163691d4edb662630d9ee338916176879c197c9b4d1e1.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 3 bytes.
- Source SHA-256 ea43bfffb02dbd03c41d0d6168c30043eb4cbe73511dfb43a43fd3cf0dc357a7; compiled object SHA-256 cd371a91f984323817fa04b4903125d981c84035794fbdb29d1461cd6deae8b1; candidate object SHA-256 8b98470fd5d1ebe49741614aa0e62c4de6830f900ccb4956e70114c0d29992d8.
- GitHub Issue: #9900 (https://github.com/soldieg/ReBLACK-XBOX/issues/9900).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
