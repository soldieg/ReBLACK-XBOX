# sub_000A37DE

- Manifest: lot 106, position 5; address order. Candidate span: 2 bytes (0x000A37DE to exclusive end 0x000A37E0).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0x937DE; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0x92B5E. REA read_bytes evidence ev_ca58b95cece6ccaba544199e910e7b170915ec553a35cbaf3ea8cfcd51508e38 returned 2 bytes. XBE raw = derived PE = split = REA; span SHA-256 52ee7bc49cb2b8661e54f8103f068838ea4bf5089db7626cad08a85a8a6dce66.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 2 bytes.
- Source SHA-256 ae2f2a7a20db6bea5b8b85093c0ddc5bf97be093c0ebadb94554a117792db8d9; compiled object SHA-256 fe3187208eb623f24c89cde18a7abf51b912a9ba190cab55abe49cec6e044131; candidate object SHA-256 b7c5715ba68d398d967feac0c07b9f6a6ae001b2ba18fce42acb1174a9e9d0fb.
- GitHub Issue: #9839 (https://github.com/soldieg/ReBLACK-XBOX/issues/9839).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
