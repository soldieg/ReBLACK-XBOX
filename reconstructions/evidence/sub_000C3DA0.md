# sub_000C3DA0

- Manifest: lot 111, position 94; address order. Candidate span: 27 bytes (0x000C3DA0 to exclusive end 0x000C3DBB).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB3DA0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB3120. REA read_bytes evidence ev_1170f83c433f4613954d883277e925781c638dfc0a34bea8c82e4d4ebc1890a7 returned 27 bytes. XBE raw = derived PE = split = REA; span SHA-256 de306a6fca58bb6b1564aebbb0a7797346cf283dc037656d9d1589b54d0a7cd6.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 27 bytes.
- Source SHA-256 8e76eadba52e1ac3be732d3cf5ee155bd5019783cc085a6524679fc3c62157d8; compiled object SHA-256 a6bb221e20efc148e5fbbaa1bc630193d9936fa27cb3b96c8045657be7f46aea; candidate object SHA-256 4ecb3cb640ff600adc3019a276c24825bb0cbe7089f59c37559c6b604f96dfc0.
- GitHub Issue: #10337 (https://github.com/soldieg/ReBLACK-XBOX/issues/10337).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
