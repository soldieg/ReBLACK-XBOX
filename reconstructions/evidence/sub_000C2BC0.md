# sub_000C2BC0

- Manifest: lot 111, position 68; address order. Candidate span: 20 bytes (0x000C2BC0 to exclusive end 0x000C2BD4).
- Boundary: Ghidra class not-in-procedure; manifest span only. It does not promote an interior or unmapped span to a function boundary. Direct references list 0 incoming call sites; callers: none listed. Indirect-call coverage remains unknown.
- XBE SHA-256 df2739c372d254a90aeeccf5971d12097f22d89fbb90db021fda96dd4deb68f6, raw offset 0xB2BC0; derived PE SHA-256 aabdebf414d216e67161df9ddf1dac5fd915ebb59bd2b26ae42e062c245682bd, offset 0xB1F40. REA read_bytes evidence ev_1170f83c433f4613954d883277e925781c638dfc0a34bea8c82e4d4ebc1890a7 returned 20 bytes. XBE raw = derived PE = split = REA; span SHA-256 49340933258b8f6a2c548a63097d94c57f6f953602e5e1e3eca53ec306364bb7.
- MSVC x86 compile passed (/W4 /TC /c /O2 /GS- /Zl /Gd /Gy). ObjDiff 3.8.2: symbol 100.00%, .text$mn 100.00%; both objects 20 bytes.
- Source SHA-256 1bd2c53295249b5ca165aae4b11495bc5ab3398e83af1e93e6069ba8bca8b68e; compiled object SHA-256 9bc875a6b87641a397a1dc4920b9cd42ec749b7a220321c221b895fe50080d53; candidate object SHA-256 9e7ca313272e6a6b2725de38380ac0e483e560bd61848056ed8f3b9ac6e9724d.
- GitHub Issue: #10320 (https://github.com/soldieg/ReBLACK-XBOX/issues/10320).
- Source preserves candidate bytes with an address-pinned emitter; this is static byte exactification, not semantic C or ABI reconstruction. Xbox link, post-link XBE diff, runtime, and gameplay were not run.
