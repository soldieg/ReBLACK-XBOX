# sub_001FD8D0

- Manifest: lot 144, position 13; address order. Candidate span: 231 bytes (0x001FD8D0 to exclusive end 0x001FD9B7).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x1ED8D0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x1ECC50. REA read_bytes evidence ev_4ebd220d1526416fde7d2838852d0ce04443fd552d43b9fc3b8a46053c387688 returned 231 bytes. XBE raw = derived PE = split = REA; span SHA-256 8b7e3b703ddbcfee5798d0ffa66edc9f21be3aa72fc5d4025668c4695f8f2687.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 231 bytes.
- Source SHA-256 6f7f3efd03906e5f5928e72c931c92b9c3baca1b53100a0bbe4b9ddefd61b884; compiled object SHA-256 cecae2bd0145f2f9cfb70a1be30181e792491b8ac35911386d76762e336a15dd; candidate object SHA-256 34765b4484f9e742da1b137a18202515094a169a1882b23c278210073be948b8.
- GitHub Issue: pending; no issue number is linked for this candidate.
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
