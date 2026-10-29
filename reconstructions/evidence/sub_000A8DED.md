# sub_000A8DED

- Manifest: lot 106, position 57; address order. Candidate span: 28 bytes (0x000A8DED to exclusive end 0x000A8E09).
- Boundary: Ghidra class interior-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x98DED; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x9816D. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 28 bytes. XBE raw = derived PE = split = REA; span SHA-256 6204515f37f98430326e319ef317b724256658d65975957c5093a78e00f88696.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 28 bytes.
- Source SHA-256 c0d7dd31e931d28a67a4e361ab6c97ff7a8068245454167cdc34562097594b38; compiled object SHA-256 64d1383c913f76b054e2fcdacd8886bcea77cb5a471170d0eb918d0e64689c1b; candidate object SHA-256 055dbad31a3fed09f9866c27225ff6114ae699be8a29e010e20a78a52412e7c5.
- GitHub Issue: #9886 (https://github.com/soldieg/ReBLACK-XBOX/issues/9886).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
