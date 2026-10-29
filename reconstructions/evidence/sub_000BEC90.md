# sub_000BEC90

- Manifest: lot 109, position 33; address order. Candidate span: 12 bytes (0x000BEC90 to exclusive end 0x000BEC9C).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xAEC90; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xAE010. REA read_bytes evidence ev_b71b6e946d2606d8eb90df3d0d93b488e2b1f0f2e29d240d0b5d504a5ed6b019 returned 12 bytes. XBE raw = derived PE = split = REA; span SHA-256 aa0ec3652c8e6c91b72e5161cca568124bbe09278fb0ef47ba71c80a12f81004.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 12 bytes.
- Source SHA-256 f2319eebb392f99c70f665c2985605b1d390a73f08e51c905b4c01f7ffc1e0f9; compiled object SHA-256 4e64d9fb0550b4a8d262097afb689d8a149afc478369fc8cae68137f3eeece53; candidate object SHA-256 1a09d0d0a52eb02a473f97861c995ab426f514536d607f980a1c44897af7f904.
- GitHub Issue: #10139 (https://github.com/soldieg/ReBLACK-XBOX/issues/10139).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
